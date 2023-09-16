#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,a,b,price,pricea_major = LLONG_MAX/2,priceb_major = LLONG_MAX/2;
        cin>>n>>k>>a>>b;
        vector < ll > x(n+1),y(n+1);
        for(ll i = 1 ; i <= n ; i++)
        {
            cin>>x[i]>>y[i];
        }
        price = abs(x[a]-x[b]) + abs(y[a]-y[b]);
        for (ll maj = 1; maj <= k; maj++)
        {
            pricea_major = min(pricea_major, abs(x[a] - x[maj]) + abs(y[a] - y[maj]));
            priceb_major = min(priceb_major, abs(x[b] - x[maj]) + abs(y[b] - y[maj]));
        }
        cout<<min(price,pricea_major+priceb_major)<<endl;
    }
    return 0;
}
