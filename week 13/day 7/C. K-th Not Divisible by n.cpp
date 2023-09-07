#include<bits/stdc++.h>
using namespace std;

void solve()
{

    long long int n, k ;
    cin >> n >> k;

    long long int div = k / (n-1) ;
    long long int ex = k % (n-1) ;
    long long int ans = n * div + ex ;
    if(ex == 0)
        ans -- ;
    cout << ans << endl ;


}

int main()
{
    int testcase;
    cin >> testcase;
    for (int t = 1; t <= testcase; t++)
    {
        solve();
    }

    return 0;
}
