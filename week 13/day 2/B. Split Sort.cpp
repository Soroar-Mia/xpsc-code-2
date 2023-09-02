#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ;
        ll n, res = 0;
        cin>>n;
        vector < ll > v(n+1,0), pos(n+1,0);
        for(ll i = 1 ; i <= n ; i++)
        {
            cin>>v[i];
            pos[v[i]] = i;
        }

        for(ll i = 2; i <= n ; i++)
        {
            if(pos[i-1] > pos[i])
            {
                res++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
