#include <bits/stdc++.h>
using namespace std;

string lexSmallestBinaryString(string s)
{
    sort(s.begin(),s.end());

    return s;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        cout << lexSmallestBinaryString(s);
    }

    return 0;
}
