/// ***** In the name of Allah, the Most Merciful, the Most Merciful *****
#include <bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
bool marked[37];
void sieve(int n)
{
    memset(marked,false,sizeof(marked));

    marked[1]=true;

    for(int i=1; i*i<=n; i++)
    {
        if(marked[i])continue;

        for(int j=i*i; j<=n; j+=i)
        {
            marked[j]=true;
        }
    }
}

int main()
{
    Faster;
    sieve(36);

    int cnt=0;
    for(int i=2; i<36; i++)
    {
        if(!marked[i])cout<<i<<" ";
        cnt+=(!marked[i]);
    }

    return 0;
}
///  ******* Praise be to Allah ********
