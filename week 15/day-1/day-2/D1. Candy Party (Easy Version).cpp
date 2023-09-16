#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % n != 0)
        {
            cout << "No\n";
            continue;
        }

        ll avg = sum / n;

        vector<int> cnt(35, 0);

        for (int i = 0; i < n; i++)
        {
            ll baki = a[i] - avg;
            if (baki == 0)
                continue;
            int add = -1;
            int rem = -1;
            for (int y = 0; y <= 30; y++)
            {
                ll k = baki + (1ll << y); // k = 2^x
                if (k > 0 && __builtin_popcountll(k) == 1)
                {
                    int on = __builtin_ctzll(k);
                    add = y;
                    rem = on;
                    break;
                }
            }
            if (add == -1)
            {
                cout << "No\n";
                goto end;
            }
            cnt[add]++;
            cnt[rem]--;
        }
        for (int i = 0; i < cnt.size(); i++)
        {
            if (cnt[i] != 0)
            {
                cout << "No\n";
                goto end;
            }
        }
        cout << "Yes\n";
end:
        ;
    }
    return 0;
}
