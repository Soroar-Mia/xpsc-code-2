#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A1, A2, B1, B2;
        cin >> A1 >> A2 >> B1 >> B2;


        int netExportA = A1 + B1;
        int netExportB = A2 + B2;


        if (netExportA < netExportB) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
