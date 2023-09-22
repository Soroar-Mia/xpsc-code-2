/// ***** In the name of Allah, the Most Merciful, the Most Merciful *****
#include <bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int

const ll mod = 1e9 + 7;

ll compute_cost(vector<int> arr, int target)
{
    ll cost = 0;
    for (auto ele : arr)
    {
        cost += abs(target - ele);
    }
    return cost;
}

int main()
{
    Faster;
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int median = arr[n / 2];
    cout << compute_cost(arr, median);
    return 0;
}
