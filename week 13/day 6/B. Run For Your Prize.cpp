#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef vector<ll> vec;;
void ara_read(vec &v,ll n);


int main()
{
    ll n;
    cin>>n;
    vec num(1000000+5,0);
    ara_read(num,n);
    ll me=1, my_friend=1000000;
    ll sec=0;
    while(n)
    {
        if(num[me]==1)
        {
            n--;
        }
        if(num[my_friend]==1)
        {
            n--;
        }
        me++;
        my_friend--;
        sec++;
    }

    cout<<sec-1<<endl;

    return 0;
}

void ara_read(vec &v,ll n)
{
    ll temp;
    for(ll i=0; i<n; i++)
    {
        scanf("%lld",&temp);
        v[temp]=1;
    }

}
