#include <bits/stdc++.h>
using namespace std;
#define int long long int


int getMex(int n, set<int> st)
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

signed main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        set<int> st;
        for(int i = 0; i < n; i++)
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
            for(int i = 0; i < n; i++)
                cout << v[i] << " ";
            continue;
        }
        for(int i = n - k + 1; i < n; i++)
            cout << v[i] << " ";
        cout << getMex(n, st) << " ";
        for(int i = 0; i < n - k; i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
