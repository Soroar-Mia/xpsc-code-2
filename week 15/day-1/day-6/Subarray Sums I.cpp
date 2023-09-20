#include<bits/stdc++.h>
using namespace std;

#define int long long
#define L cout<<'\n';
#define E cerr<<'\n';
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for (int i=a; i<b; ++i)

void seea(int a[], int start, int end) {
    for (int i = start; i < end; ++i) {
        cout << a[i] << ' ';
    }
    cout << '\n';
}

void put(int ans) {
    cout << ans << '\n';
}

void solve() {
    int n, x;
    cin >> n >> x;
    int i = 0, j = 1;
    int a[n + 1] = {0}; // This line should be removed as it's not a valid way to initialize an array.
    // If you want to initialize it with all zeros, you can use the following line:
    // int a[n + 1] = {0};
    unordered_map<int, int> mp;
    int s = 0;
    mp[0] = 1;
    int ans = 0;
    rep(i, 0, n) {
        cin >> a[i]; // Read input values into the array.
        s += a[i];
        if (mp.find(s - x) != mp.end()) ans += mp[s - x];
        mp[s]++;
    }
    put(ans);
}

signed main() {
    int t = 1;
    while (t--) {
        solve();
    }
}
