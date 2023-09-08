#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k=INT_MAX;
        ll a,b;
        vector < pair < ll, ll > >v;
        cin>>n;
        for(ll i = 0 ; i < n ; i++)
        {
            cin>>a>>b;
            v.push_back({a,b});
        }

        for(ll i = 0 ; i < (ll)v.size(); i++)
        {
            k = min(v[i].first+(v[i].second-1)/2,k);
        }
        cout<<k<<endl;
    }
    return 0;
}
