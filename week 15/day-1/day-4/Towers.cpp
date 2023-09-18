/// ***** In the name of Allah, the Most Merciful, the Most Merciful *****
#include <bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define vi vector<int>

void solve()
{
    int n;
    cin >> n; // Change "see(n);" to "cin >> n;"
    vi v;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x; // Change "see(x);" to "cin >> x;"
        auto y = upper_bound(v.begin(), v.end(), x); // Add "v.begin(), v.end()," to upper_bound function
        if (y == v.end()) v.push_back(x); // Change "v.pb(x);" to "v.push_back(x);"
        else
        {
            v[y - v.begin()] = x;
        }
    }
    cout << v.size() << endl; // Change "put(v.sz);" to "cout << v.size() << endl;"
}

int main()
{
    Faster;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
/// ******* Praise be to Allah ********
