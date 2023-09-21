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
        ll a,b;
        cin>>a>>b;
        vector<ll>v(a);
        for(ll i=0; i<a; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        ll sum=0;
        ll ans=0;
        for(ll i=0; i<a; i++)
        {
            sum=sum+v[i];

            if(sum>=b)
            {
                ans=v[i];
                break;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
///  ******* Praise be to Allah ********
