#include <bits/stdc++.h>
#include <math.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846


const int M=1e9+7;
long long mod(long long x)
{
    return ((x%M + M)%M);
}
long long add(long long a, long long b)
{
    return mod(mod(a)+mod(b));
}
long long mul(long long a, long long b)
{
    return mod(mod(a)*mod(b));
}

ll modPow(ll a, ll b)
{
    if(b==0)
        return 1LL;
    if(b==1)
        return a%M;
    ll res=1;
    while(b)
    {
        if(b%2==1)
            res=mul(res,a);
        a=mul(a,a);
        b=b/2;
    }
    return res;
}


void solve ()
{
    int n,k;
    cin>>n>>k;
    if(n==1)
    {
        cout<<k<<"\n";
        return;
    }
    if(n==k)
    {
        cout<<1<<"\n";
        return;
    }
    if(n<k)
    {
        int a=k/n;
        int b=k%n;
        if(b!=0) a++;
        cout<<a<<"\n";
        return;
    }
    else
    {
        int c=n/k;
        int d=n%k;
        if(d!=0) c++;
        k*=c;
        int a=k/n;
        int b=k%n;
        if(b!=0) a++;
        cout<<a<<"\n";
        return;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout<<fixed;
    cout<<setprecision(10);
    int t=1;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        //    cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}
