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
            ll n,m;
            cin>>n>>m;
            ll cnt1[33]={0};
            for(int i=0;i<n;i++)
            {
                    ll x;
                    cin>>x;
                    for(int j=0;j<32;j++)
                    {
                           if((x&1)==1)cnt1[j]++;
                          // cout<<x<<" ";
                           x=(x>>1);
                    }
                    //cout<<endl;
            }
            ll cnt2[33]={0};
            for(int i=0;i<m;i++)
            {
                    int x;
                    cin>>x;
                     for(int j=0;j<32;j++)
                    {
                           if((x&1)==1)cnt2[j]++;
                           x=(x>>1);
                    }
            }
            ll ans=0;
            ll x=1;
            for(int i=0;i<32;i++)
            {
                    //cout<<cnt1[i]<<" ";
                    if(cnt1[i]%2==1)ans+=x;
                    //cout<<ans<<" ";
                    x*=2;
            }
            //cout<<endl;
            ll mn=ans;
            ll mx=ans;
            //cout<<ans<<endl;
            if(n%2==1)
            {
                    x=1;
                    for(int i=0;i<33;i++)
                    {
                            if(cnt2[i]>0)
                            {
                                    if(cnt1[i]%2==0)mx+=x;
                            }
                            x*=2;
                    }
            }
            else{
                x=1;
                for(int i=0;i<33;i++)
                {
                        if(cnt2[i]>0)
                        {
                                if(cnt1[i]%2==1)mn-=x;
                        }
                        x*=2;
                }
            }
            cout<<mn<<" "<<mx<<endl;
    }
}
