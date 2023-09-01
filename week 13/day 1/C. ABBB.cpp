#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        string s;
        cin>>s;
        stack<char>t;
        for(int i=0; i<(int)s.size(); i++)
        {
            if(t.size()==0)
            {
                t.push(s[i]);
                continue;
            }
            if(s[i]=='B' && (t.top()=='A' || t.top()=='B'))
                t.pop();
            else
            {
                t.push(s[i]);
            }
        }
        cout<<(int)t.size()<<"\n";
    }
    return 0;
}
