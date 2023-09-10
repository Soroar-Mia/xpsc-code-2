#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<pair<int, int>> operations;
        int k = 0;

        // Perform operations until all elements become 0
        while (true) {
            bool allZero = true;

            for (int i = 0; i < n; i++) {
                if (a[i] != 0) {
                    allZero = false;
                    break;
                }
            }

            if (allZero) break;

            int l = -1, r = -1, s = 0;

            // Find the left and right bounds for the operation
            for (int i = 0; i < n; i++) {
                if (a[i] != 0) {
                    if (l == -1) {
                        l = i + 1;
                    }
                    r = i + 1;
                    s ^= a[i];
                } else if (l != -1) {
                    break;
                }
            }

            // Perform the operation
            for (int i = l - 1; i < r; i++) {
                a[i] = s;
            }

            operations.push_back({l, r});
            k++;
        }

        // Output the result
        cout << k << endl;
        for (auto op : operations) {
            cout << op.first << " " << op.second << endl;
        }
    }

    return 0;
}
