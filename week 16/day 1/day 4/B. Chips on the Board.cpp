/// ***** In the name of Allah, the Most Merciful, the Most Merciful *****
#include <bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int

int main()
{
    Faster;
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        vector<int>vec(n),vec2(n);
        int ans1=0,ans=0;
        for(int i=0; i<n; i++)
        {
            cin >> vec[i];
            ans+=vec[i];
        }
        for(int i=0; i<n; i++)
        {
            cin >> vec2[i];
            ans1+=vec2[i];
        }
        sort(vec2.begin(),vec2.end());
        sort(vec.begin(),vec.end());
        cout << min(ans + n*vec2[0],ans1+n*vec[0]) << endl;
    }
}
