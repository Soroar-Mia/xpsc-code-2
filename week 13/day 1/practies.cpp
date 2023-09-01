#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        stack<char>st;
        for(int i=0; i<n; i++)
        {
            if(st.size()==0)
            {
                st.push(s[i]);
                  continue;
            }

            if(s[i]=='B' && (st.top()=='A' || st.top()=='B'))
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        cout<<st.size()<<endl;
    }
}
