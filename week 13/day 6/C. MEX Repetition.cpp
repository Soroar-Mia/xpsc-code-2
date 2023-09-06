#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int INF = 1e18 + 1e9;
int getMex(ll n, set<ll> st)
{
    int cur = 0;
    auto it = st.begin();
    while(cur <= n && it != st.end())
    {
        if(cur != *it)
            return cur;
        cur++;
        it++;
    }
    return n;
}
int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        set<ll> st;
        for(ll i = 0; i < n; i++)
        {
            cin >> v[i];
            st.insert(v[i]);
        }
        if(n == 1)
        {
            if(k % 2)
                v[0] = 1 - v[0];
            cout << v[0] << "\n";
            continue;
        }
        k %= (n + 1);
        if(k == 0)
        {
            for(ll i = 0; i < n; i++)
                cout << v[i] << " ";
            continue;
        }
        for(ll i = n - k + 1; i < n; i++)
            cout << v[i] << " ";
        cout << getMex(n, st) << " ";
        for(ll i = 0; i < n - k; i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
