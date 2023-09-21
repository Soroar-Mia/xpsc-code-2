/// ***** In the name of Allah, the Most Merciful, the Most Merciful *****
#include <bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int

int main()
{
    Faster;
    ll n;
    vector<ll> a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    for(int i=0; i<n; i+=2)
        cout<<a[i]<< " ";
    if(n%2)
        n--;
    for(int i=n-1; i>=1; i-=2)
        cout<<a[i]<< " ";
    cout<<endl;
    return 0;
}

