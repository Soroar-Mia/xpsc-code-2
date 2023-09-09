#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        vector<ll>a(n);
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a.begin(),a.end());

        ll ans=0;

        for(ll i=0; i<n; i++)
        {
            if(a[i]!=-1)
            {
                ll target=a[i]*x;
                int found=-1;
                int low=i+1,high=n-1;
                while(low<=high)
                {
                    int mid=low+(high-low)/2;
                    if(a[mid]==target)
                    {
                        found=mid;
                        high=mid-1;
                    }
                    if(a[mid]<target)
                    {
                        low=mid+1;
                    }
                    else
                    {
                        high=mid-1;
                    }
                }
                if(found==-1)
                {
                    ans++;
                }
                else
                {
                    a[found]=-1;
                }
            }
        }

        cout<<ans<<endl;
    }

}

