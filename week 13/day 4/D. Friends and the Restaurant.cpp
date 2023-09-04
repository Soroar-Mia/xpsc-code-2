#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> OS;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> OMS;


#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> a(n,0);

        for(int i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            a[i]-=x;
        }
        for(int i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            a[i]+=x;
        }

        sort(a.begin(),a.end(),greater<ll>());



        int ans=0;
        int l=0,r=n-1;
        while(l<r)
        {
            if(a[l]>-1 and a[r]>-1)
            {
                ans++;
                l++,r--;
            }
            else if(a[l]<0 and a[r]<0)
            {
                break;
            }
            else if(a[l]>-1)
            {
                if(a[l]>=abs(a[r]))
                {
                    ans++;
                    l++,r--;
                }
                else
                {
                    r--;
                }
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}

