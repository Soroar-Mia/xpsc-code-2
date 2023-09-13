#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> rearrangeConcussiveSequence(int n, vector<int>& arr) {
    vector<int> result(n);

    // Sort the array in non-decreasing order
    sort(arr.begin(), arr.end());

    int left = 0, right = n - 1;
    int index = 0;

    // Alternate between picking elements from the beginning and end of the sorted array
    while (left <= right) {
        if (index % 2 == 0) {
            result[index] = arr[left];
            left++;
        } else {
            result[index] = arr[right];
            right--;
        }
        index++;
    }

    // Check if the resulting sequence is concussive
    for (int i = 1; i < n - 1; i++) {
        if (!((result[i - 1] < result[i] && result[i] > result[i + 1]) || (result[i - 1] > result[i] && result[i] < result[i + 1]))) {
            return {-1}; // If not concussive, return -1
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> result = rearrangeConcussiveSequence(n, arr);

        if (result[0] == -1) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < n; i++) {
                cout << result[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

