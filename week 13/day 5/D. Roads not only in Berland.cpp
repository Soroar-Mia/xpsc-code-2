#include<bits/stdc++.h>

using namespace std;
#define int long long
#define vi vector<int>
#define pb push_back
#define vvii vector<vector<int>>
#define vpii vector<pair<int,int>>
#define pii pair<int,int>
#define f first
#define s second
#define FOR(i,a,b) for (int (i) = (a); (i) < (b); ++(i))
#define FIR(i,a,b) for (int (i) = (a); (i) <=(b); ++(i))
#define REP(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int (i) = (b)-1; (i) >= (a); --(i))
#define PER(i,a) ROF(i,0,a)
#define rep(a) REP(_,a)
#define each(a,x) for (auto& a: x)
#define all(x) begin(x), end(x)

vi par(10001);
vi sz(10001);


void make_set(int v){
	par[v]=v;
	sz[v]=1;
}

int find_set(int v){
	if(v==par[v])return v;

	return par[v]=find_set(par[v]);
}

void union_size(int a,int b){
	a=find_set(a);
	b=find_set(b);
	if(a!=b){
		if(a<b)swap(a,b);
		par[b]=a;
		sz[a]+=sz[b];
	}
}

void solve(){
    int n;
    cin>>n;
    par.resize(n+1);
    sz.resize(n+1);
    vpii rm;
    vpii add;
    for(int i=1;i<=n;i++){
    	make_set(i);
    }
    REP(i,n-1){
    	int a,b;
    	cin>>a>>b;
    	int a_p=find_set(a);
    	int b_p=find_set(b);
    	if(a_p==b_p){
    		rm.pb({a,b});
    	}else{
    		union_size(a,b);
    	}
    }
    FOR(i,1,n){
    	int u=find_set(i);
    	int v=find_set(i+1);
    	if(u!=v){
    		add.pb({i,i+1});
    		union_size(i,i+1);
    	}
    }
    int ans=rm.size();
    cout<<ans<<endl;
    REP(i,ans){
    	cout<<rm[i].f<<" "<<rm[i].s<<" "<<add[i].f<<" "<<add[i].s<<endl;
    }


}

int32_t main(){
   int t=1;
   while(t--){
   	solve();
   }
}
