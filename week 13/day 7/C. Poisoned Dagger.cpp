#include<bits/stdc++.h>
using  namespace  std;
typedef long long int ll;


ll solve(ll ar[], ll n,ll h)
{
    ll ans=h;
    ll l=1;
    ll r=h;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        ll z=0;
        for(ll i=0;i<n;i++)
        {
            if(i==n-1)z+=mid;
            else{
                ll x=ar[i+1]-ar[i];
                if(x>=mid)z+=mid;
                else z+=x;
            }
        }
        if(z>=h)
        {
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    return ans;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,h;
        cin>>n>>h;
        ll ar[n+4];
        for(ll i=0;i<n;i++)cin>>ar[i];
        ll ans = solve(ar,n,h);
        cout<<ans<<endl;
    }
}
