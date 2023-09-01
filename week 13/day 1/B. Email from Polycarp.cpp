#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;
#define pb push_back
#define pp pair<char, int>

using namespace std;

int main()
{
    int i, j, k;
    int n, m, cnt;
    string s, t, z;

    cin>>n;
    while(n--)
    {
        cin >> s >> t;

        m = s.length();
        cnt = 1;
        vector<pp> vec, vec2;

        for(i = 0; i < m; i++)
        {
            if(i + 1 < m)
            {
                if(s[i] == s[i + 1])
                    cnt++;
                else
                    vec.pb({s[i], cnt}), cnt = 1;
            }

            else
                vec.pb({s[i], cnt});
        }

        m = t.length();
        cnt = 1;
        for(i = 0; i < m; i++)
        {
            if(i + 1 < m)
            {
                if(t[i] == t[i + 1])
                    cnt++;
                else
                    vec2.pb({t[i], cnt}), cnt = 1;
            }

            else
                vec2.pb({t[i], cnt});
        }

        i = 0, j = 0;
        bool f = false;
        if(vec.size() == vec2.size())
        {
            f = true;
            while(i < vec.size() && j < vec2.size())
            {
                if(vec[i].first == vec2[j].first && vec2[j].second >= vec[i].second)
                    i++, j++;

                else
                {
                    f = false;
                    break;
                }
            }
        }


        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


    return 0;
}
