#include<bits/stdc++.h>
using  namespace  std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        int ar[n+4],br[n+4];
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            br[i]=i+1;
        }
        int ans=0;
        for(int i=0; i<n-1; i++)
        {
            if(ar[i]==ar[i+1])
            {
                v.push_back(br[i+1]);
                swap(br[i],br[i+1]);
                mp[i]++;
                mp[i+1]++;
            }
            else
            {
                if(mp[i]!=0)
                {
                    v.push_back(br[i]);
                }
                else
                {
                    ans=1;
                    break;
                }
            }

        }
        if(mp[n-1]!=0)v.push_back(br[n-1]);
        else ans=1;
        if(ans==1)cout<<"-1"<<endl;
        else
        {
            for(int i=0; i<n; i++)cout<<v[i]<<" ";
            cout<<endl;
        }
    }
}

