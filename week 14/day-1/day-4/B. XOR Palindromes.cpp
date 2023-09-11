#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> good(n + 1, 0);

        int ones = 0;
        int mismatches = 0;

        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                ones++;
            } else {
                mismatches++;
            }

            if (ones >= mismatches) {
                good[i + 1] = 1;
            }
        }

        ones = 0;
        mismatches = 0;

        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == '1') {
                ones++;
            } else {
                mismatches++;
            }

            if (ones >= mismatches) {
                good[i] = 1;
            }
        }

        for (int i = 0; i <= n; ++i) {
            cout << good[i];
        }

        cout << "\n";
    }

    return 0;
}
