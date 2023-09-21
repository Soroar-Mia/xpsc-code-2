#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to calculate the minimum moves to match a substring K in S
int minMovesToMatchSubstring(string S, string K) {
    int n = S.length();
    int m = K.length();
    int minMoves = n;  // Initialize with a value greater than the maximum possible moves

    // Iterate through all possible starting positions of K in S
    for (int i = 0; i <= n - m; ++i) {
        int moves = 0;

        // Check how many moves are needed to match K with the substring of S starting at position i
        for (int j = 0; j < m; ++j) {
            int diff = S[i + j] - K[j];
            if (diff < 0) diff += 10;  // Handle cyclic digits
            moves += diff;
        }

        // Update minMoves if the current substring requires fewer moves
        minMoves = min(minMoves, moves);
    }

    return minMoves;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        string S, K;
        cin >> S >> K;

        int result = minMovesToMatchSubstring(S, K);
        cout << result << endl;
    }

    return 0;
}
