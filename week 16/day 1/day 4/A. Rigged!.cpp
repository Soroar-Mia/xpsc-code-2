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
        vector<pair<int,int>>pr;
        int mini=INT_MAX;
        int p=0,q=0;
        for(int i=0; i<n; i++)
        {
            int x,y;
            cin >> x >> y;
            if(i==0) p=x,q=y;
            else pr.push_back(make_pair(x, y));
        }
        int mx=INT_MIN;
        int ans=0;
        for(auto it:pr)
        {
            if(it.first>=p && it.second>=q)
            {
                ans=-1;
                break;
            }
        }
        if(ans==-1) cout << -1 << endl;
        else cout << p << endl;
    }
}
