#include<bits/stdc++.h>
using  namespace  std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'
#define pi          acos(-1.0)
#define mod               1000000007

typedef long long int ll;
typedef unsigned long long int  llu;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<pair<int,int> >v;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            v.push_back({x,i});
        }
        sort(v.begin(),v.end());
        int mx[n+3];
        int mxx=0;
        int mn[n+3];
        int mnn=INT_MAX;
        for(int i=v.size()-1; i>=0; i--)
        {
            mxx=max(mxx,v[i].second);
            mx[i]=mxx;
            mnn=min(mnn,v[i].second);
            mn[i]=mnn;
        }
        map<int,int>mp;
        for(int i=0; i<v.size(); i++)
        {
            int ind=i+1;
            int x=mx[i]- mn[i]  +1;
            int val=v[i].first;
            mp[val]=max(mp[val],x*2);
        }
        for(int i=1; i<=k; i++)cout<<mp[i]<<" ";
        cout<<endl;
    }
}


