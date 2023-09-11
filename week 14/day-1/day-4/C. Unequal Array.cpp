#include<bits/stdc++.h>
using  namespace  std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'
 #define mod 1000000007
typedef long long int ll;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+4];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int p1=-1,p2=-1;
        for(int i=0;i<n-1;i++)
        {
            if(ar[i]==ar[i+1])
            {
                p1=i+1;
                break;
            }
        }
        for(int i=n-1;i>0;i--)
        {
            if(ar[i]==ar[i-1])
            {
                p2=i-1;
                break;
            }
        }
        //cout<<p1<<" "<<p2<<endl;
        if(p1>p2 || p1==-1)cout<<0<<endl;
        else if(p1==p2)cout<<1<<endl;
        else{
            int ans = p2-p1;
            cout<<ans<<endl;
        }
    }
}
