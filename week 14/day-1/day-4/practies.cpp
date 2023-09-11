#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = i + 1;
        }

        sort(b.begin(), b.end());

        vector<int> c(n);
        for (int i = 0; i < n; i++) {
            c[i] = a[i] - b[i];
        }

        vector<int> distinct_nums;
        for (int i = 0; i < n; i++) {
            if (i == 0 || c[i] != c[i - 1]) {
                distinct_nums.push_back(c[i]);
            }
        }

        for (int i = 0; i < n; i++) {
            auto it = lower_bound(distinct_nums.begin(), distinct_nums.end(), c[i]);
            int idx = it - distinct_nums.begin();
            cout << b[idx] << " ";
        }

        cout << endl;
    }

    return 0;
}
