/// ***** In the name of Allah, the Most Merciful, the Most Merciful *****
#include <bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int

int main()
{
    Faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> _a = a;

        sort(_a.begin(), _a.end());

        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            if (_a[i] != a[i])
            {
                ok = true;
                break;
            }
        }

        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
///  ******* Praise be to Allah ********
