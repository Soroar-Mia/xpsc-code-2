#include <bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll k;
    cin >> k;

    for (ll i = 0; i < n - 1; i++)
    {
        a[i] = min(a[i], a[i + 1]);
    }
    a.insert(a.begin(), 0);
    n++;
    vector<ll> res(n, 0);
    res[0] = 1e9 + 5;
    for (ll i = 1; i < n; i++)
    {
        ll d = a[i] - a[i - 1];
        if (d == 0)
        {
            res[i] = res[i - 1];
            continue;
        }

        if (k < d)
        {
            break;
        }

        ll tmp = k / d;
        tmp = min(tmp, res[i - 1]);
        res[i] = tmp;
        k -= (tmp * d);
    }

    for (ll i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }

    cout << endl;
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
