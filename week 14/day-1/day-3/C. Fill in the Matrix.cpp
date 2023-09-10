#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int MEX(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int mex = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == mex) {
            mex++;
        } else if (arr[i] > mex) {
            break;
        }
    }
    return mex;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> matrix(n, vector<int>(m));
        vector<vector<int>> columns(m);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = j;
                columns[j].push_back(j);
            }
        }

        int max_beauty = 0;
        for (int j = 0; j < m; j++) {
            int beauty = MEX(columns[j]);
            max_beauty = max(max_beauty, beauty);
        }

        cout << max_beauty << endl;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
