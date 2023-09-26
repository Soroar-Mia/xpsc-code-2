/// ***** “In the name of Allah, The Most Gracious and The Most Merciful“ *****
#include <bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a[n];
        vector<int> allNums;
        for(int i=0; i<n; i++)
        {
            int k;
            cin>>k;
            a[i].resize(k);
            for(int j=0; j<a[i].size(); j++)
            {
                cin>>a[i][j];
                allNums.push_back(a[i][j]);
            }
        }

        sort(allNums.begin(),allNums.end());
        allNums.erase(unique(allNums.begin(),allNums.end()),allNums.end());

        int ans=0;
        for(int exclude=1; exclude<=50; exclude++)
        {
            vector<int> temp;
            for(int i=0; i<n; i++)
            {
                bool found=false;
                for(int j=0; j<a[i].size(); j++)
                {
                    if(a[i][j]==exclude)
                    {
                        found=true;
                        break;
                    }
                }
                if(!found)
                {
                    for(int j=0; j<a[i].size(); j++)
                    {
                        temp.push_back(a[i][j]);
                    }
                }
            }
            sort(temp.begin(),temp.end());
            temp.erase(unique(temp.begin(),temp.end()),temp.end());
            if(temp!=allNums)
            {
                ans=max(ans,(int)temp.size());
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
///  ******* Praise be to Allah ********
