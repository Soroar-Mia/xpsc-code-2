/// ***** In the name of Allah, the Most Merciful, the Most Merciful *****
#include <bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int

int main()
{
    Faster;
    int n;
    cin>>n;
    int index=1;
    int worms;
    vector<int>arr(1000006);

    for(int i=1; i<=n; i++)
    {
        cin>>worms;
        while(worms--)
        {
            arr[index]=i;
            index++;
        }
    }

    int number_juicy_worm;
    cin>>number_juicy_worm;
    while(number_juicy_worm--)
    {
        cin>>worms;
        cout<<arr[worms]<<endl;
    }
    return 0;
}
