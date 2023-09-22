/// ***** In the name of Allah, the Most Merciful, the Most Merciful *****
#include <bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int

const int maxN = 2e5;
int N, X, l, ans, p[maxN];
int main()
{
    Faster;
    cin>>N>>X;
    for(int i = 0; i < N; i++)
    {
        cin>>p[i];
    }
    sort(p, p+N);

    l = 0;
    for(int r = N-1; r >= l; r--)
    {
        if(p[l] + p[r] <= X)
            l++;
        ans++;
    }
    cout<<ans<<endl;
}
