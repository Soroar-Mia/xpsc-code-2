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
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll ar[n+4];
        vector<ll>v;
        for(ll i=1; i<=n; i++)
        {
            cin>>ar[i];
            v.push_back(ar[i]);
        }
        sort(v.begin(),v.end());
        ll sum=0;
        priority_queue<ll>pq;
        for(ll i=0; i<n; i++)
        {
            if(sum+v[i]<=m)
            {
                sum+=v[i];
                pq.push(v[i]);
            }
            else
            {
                break;
            }
        }
        ll pos=1;
        //cout<<"aci"<<pq.size()<<endl;
        for(ll i=n; i>=1; i--)
        {
            if(pq.size()>=i)break;
            else if(pq.size()!=0 && pq.size()==i-1)
            {
                ll x=pq.top();
                sum-=x;
                ll gap=m-sum;
                if(gap>=ar[i])break;

            }
            pos++;
        }
        cout<<pos<<endl;
    }
}
