#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2,4,8,9,11,13,13,13,13,17,19};


    int anss=*lower_bound(arr.begin(),arr.end(),13);
    int ans=*upper_bound(arr.begin(),arr.end(),13);


    cout<<ans-anss;

}
