#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n, i, j;

    cin>>t;

    for(;t--;)
    {
        cin>>n;

        ll a[n];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a+1, a+n);

        for(i=1; i<n; i++)
        {
            if(a[i]>a[0]){
                if((a[i]+a[0])%2==0){
                    a[0]=(a[i]+a[0])/2;
                }else{
                    a[0]=(a[i]+a[0])/2+1;
                }
            }
        }

        cout<<a[0]<<"\n";
    }
}
