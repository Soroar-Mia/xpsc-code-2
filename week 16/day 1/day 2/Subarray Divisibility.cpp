/// ***** In the name of Allah, the Most Merciful, the Most Merciful *****
#include <bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define seea(a,x,y) for(int i=x;i<y;i++){cin>>a[i];}


void solve()
{
    int n;
    cin>>n;
    int a[n+1]= {0};
    seea(a,0,n);
    unordered_map<int,int> mp;
    int s=0;
    mp[0]=1;
    int ans=0;
    rep(i,0,n)
    {
        s+=a[i];
        s%=n;
        while(s<0)s+=n;
        if (mp.find(s)!=mp.end()) ans+=mp[s];
        mp[s]++;
    }
    cout<<ans;

}
int main()
{
    Faster;
    int t=1;
    while(t--)
    {
        solve();
    }

}
