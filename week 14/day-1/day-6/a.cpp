#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;

        string result = S;


        for (int i = 0; i <= N - 3; ++i) {
            if (S[i] == '1' && S[i + 1] == '1' && S[i + 2] == '0') {

                result[i] = '1';
                result[i + 1] = '0';
                result[i + 2] = '0';
                break;
            }
        }

        cout << result << endl;
    }

    return 0;
}
