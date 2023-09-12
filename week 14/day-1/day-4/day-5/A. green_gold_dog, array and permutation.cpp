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
        vector < pair < ll, ll > > v(n);
        vector < ll > res(n);
        for(ll i = 0 ; i < n; i++)
        {
            cin>>v[i].first;
            v[i].second = i;
        }
        sort(v.begin(), v.end(), greater < pair < ll, ll > >());
        for(ll i = 0; i < n ; i++)
        {
            res[v[i].second] = i+1;
        }
        for(ll i = 0 ; i < n ; i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
///  ******* Praise be to Allah ********
