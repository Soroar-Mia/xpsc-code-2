/// ***** In the name of Allah, the Most Merciful, the Most Merciful *****
#include <bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define N 20000001

vector<ll> primes;

bitset<N> marked;

void sieve(int n)
{

    marked.reset();

    marked[1]=true;

    for(ll i=2; i*i<N; i++)
    {
        if(marked[i])continue;

        for(ll j=i*i; j<N; j+=i)
        {
            marked[j]=true;
        }
    }

    for(int i=2; i<N; i++)
    {
        if(!marked[i])primes.push_back(i);
    }
}




int main()
{
    Faster;
    sieve(20000002);

    vector<ll> dex;

    for(int i=0; i<primes.size(); i++)
    {
        for(int j=i+1; j<primes.size() and primes[i]*primes[j]<20000001; j++)
        {
            dex.push_back(primes[i]*primes[j]);
        }
    }

    sort(dex.begin(),dex.end());


    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;

        cout<<dex[k-1]<<endl;
    }
    return 0;
}
