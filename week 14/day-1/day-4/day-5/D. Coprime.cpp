/// ***** In the name of Allah, the Most Merciful, the Most Merciful *****
#include <bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int

int main()
{
    Faster;
    vector<int> cop[1111];

    for(int i=1; i<=1000; i++)
    {
        for(int j=1; j<=1000; j++)
        {
            if(__gcd(i,j)==1)
            {
                cop[i].push_back(j);
            }
        }
    }

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n+1);
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }

        vector<int> mxIndx(1111,-1);

        for(int i=1; i<=n; i++)
        {
            mxIndx[a[i]]=i;
        }

        int ans=0;

        for(int i=1; i<=1000; i++)
        {
            if(mxIndx[i]==-1)continue;

            if(i==1)
            {
                ans=max(ans,2*mxIndx[i]);
                continue;
            }
            for(auto p:cop[i])
            {
                if(mxIndx[p]!=-1)
                {
                    ans=max(ans,mxIndx[i]+mxIndx[p]);
                }
            }
        }
        if(ans==0)ans=-1;
        cout<<ans<<endl;
    }
    return 0;
}
///  ******* Praise be to Allah ********
