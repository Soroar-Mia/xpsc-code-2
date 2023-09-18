/// ***** In the name of Allah, the Most Merciful, the Most Merciful *****
#include <bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int

int main()
{
    Faster;
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, int> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    int sz = m.size();
    cout << sz << endl;

    return 0;
}
///  ******* Praise be to Allah ********



