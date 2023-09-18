/// ***** In the name of Allah, the Most Merciful, the Most Merciful *****
#include <bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int

int main()
{
    Faster;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }

        ll ans=0;
        for(ll i=0; i<n; i++)
        {
            for(ll j=i; j<n; j++)
            {
                ll add=j-i+1;
                for(ll k=i; k<=j; k++)
                {
                    add+=(a[k]==0);
                }
                ans+=add;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
///  ******* Praise be to Allah ********

