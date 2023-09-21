/// ***** In the name of Allah, the Most Merciful, the Most Merciful *****
#include <bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int

int main()
{
    Faster;
    ll t;
    cin>>t;
    while(t--)
    {
        int a,b,c,bb,cc;
        cin>>a>>b>>c;
        if(a%b==0)
        {
            bb=a/b;
        }
        else if(a%b !=0)
        {
            bb=(a/b) +1;
        }

        if(a%c==0)
        {
            cc=a/c;
        }
        else if(a%c !=0)
        {
            cc=(a/c) +1;
        }
        int an=bb-cc;
        int ans=an-1;

        if(bb<=cc)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    return 0;
}
///  ******* Praise be to Allah ********
