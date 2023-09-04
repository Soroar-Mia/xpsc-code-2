#include <bits/stdc++.h>
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
    Faster;
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        s="@"+s;

        vector<int> visited(n+1,0);

        for(int i=1; i<=n; i++)
        {
            if(s[i]=='1')visited[i]=2;
        }

        ll ans=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=i; j<=n; j+=i)
            {
                if(visited[j]==0)
                {
                    visited[j]=1;
                    ans+=i;
                }
                else if(visited[j]==2)
                {
                    break;
                }
            }
        }

        cout<<ans<<endl;

    }
    return 0;
}
