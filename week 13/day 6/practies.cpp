#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, H;
        cin >> X >> H;

        int turns = 0;
        if (H <= X) {

            turns = 1;
        } else {

            turns += 5;
            H -= (5 * (X / 2));


            if (H > 0) {
                turns += (H + X - 1) / X;
            }
        }

        cout << turns << endl;
    }

    return 0;
}
