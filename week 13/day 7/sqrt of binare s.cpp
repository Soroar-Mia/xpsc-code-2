#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll x;
    cin>>x;
    ll l=0,r=x,ans;
    while(l<=r)
    {
        ll mid=l + (r-l)/2ll;
        if(mid*mid<=x)
        {
            ans=mid;
            l=mid+1ll;
        }
        else if(mid*mid>x)
        {
            r=mid-1ll;
        }
    }
    cout<<ans;
}
