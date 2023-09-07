#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        ll f=0;
        ll a[n+10];
        map<ll,ll>m;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
            if(m[a[i]]>f)
            {
                f=m[a[i]];
            }
        }
        ll k=m.size();
        if(f==m.size())
        {
            cout<<f-1<<endl;
        }

        else
            cout<<min(k,f)<<endl;


    }

}
