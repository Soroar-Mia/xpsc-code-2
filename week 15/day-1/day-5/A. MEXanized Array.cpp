/// ***** In the name of Allah, the Most Merciful, the Most Merciful *****
#include <bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int


int main()
{
    Faster;
    int t;
    cin>>t;
    while(t--)
    {
            ll n,k,x;
            cin>>n>>k>>x;
            if(n<k || x<k-1)cout<<-1<<endl;
            else{
                ll a=k-1;
                ll ans=(a*(a+1))/2;
                ll baki=n-k;
                if(x!=k)ans+=baki*x;
                else ans+=baki*(k-1);
                cout<<ans<<endl;
            }
    }
}
///  ******* Praise be to Allah ********
