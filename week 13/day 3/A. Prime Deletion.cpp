#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.size();
        char a;
        for(int i=0; i<n; i++)
        {
            if(s[i] == '1')
            {
                a = s[i];
                break;
            }
            else if(s[i] =='7')
            {
                a = s[i];
                break;
            }
        }
        if(a == '1')
        {
            cout<<"17"<<endl;
        }
        else
        {
            cout<<"71"<<endl;
        }
    }
}
