/// ***** In the name of Allah, the Most Merciful, the Most Merciful *****
#include <bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int

int main()
{
    Faster;

    ll t, n, i, j, ans, c, m, l, h, f;
    string a, b, d;

    cin>>t;

    for(; t--;)
    {
        cin>>n;

        cin>>a;

        ans=100000000;
        for(i=0; i<26; i++)
        {
            c=0;
            f=0;
            for(l=0, h=n-1; l<h;)
            {
                if(a[l]!=a[h])
                {
                    if(a[l]==char(i+97))
                    {
                        l++;
                        c++;
                    }
                    else if(a[h]==char(i+97))
                    {
                        h--;
                        c++;
                    }
                    else
                    {
                        f++;
                        break;
                    }
                }
                else
                {
                    l++;
                    h--;
                }
            }
            if(f==0)
            {
                ans=min(ans, c);
            }
        }
        if(ans==100000000)
            ans=-1;

        cout<<ans<<"\n";
    }
}
