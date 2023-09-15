/// ***** In the name of Allah, the Most Merciful, the Most Merciful *****
#include <bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int

int main()
{
    Faster;
    string s;
    cin >> s;
    int n = s.size();
    sort(s.begin(), s.end());
    string s1, s2, s3;
    int i = 0;
    while (i < n)
    {
        char a = s[i];
        char b = s[i + 1];
        if (i + 1 >= n)
        {
            s2 = s2 + a;
            break;
        }
        if (a == b)
        {
            s1 = s1 + a;
            s3 = s3 + b;
            i = i + 2;
        }
        else if (a != b)
        {
            s2 = s2 + a;
            i++;
        }
    }
    reverse(s3.begin(), s3.end());
    string sss = s1 + s2 + s3;
    cout << sss;

    return 0;
}
///  ******* Praise be to Allah ********
