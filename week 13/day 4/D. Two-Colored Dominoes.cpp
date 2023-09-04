#include<bits/stdc++.h>
using namespace std;
char a[550][550];

int main()
{

    int t, n, m,cnt,flag;
    cin >> t;
    while (t--)
    {
        flag = 1;
        char w = 'W', b = 'B';
        cin >> n >> m;
        for (int i = 1; i <= n; i++)cin >> a[i] + 1;
        for (int i = 1; i <= n; i++)
        {
            cnt = 0;
            for (int j = 1; j <= m; j++)
            {
                if (a[i][j] == 'U')
                {
                    cnt++;
                    a[i][j] = w;
                    a[i + 1][j] = b;
                    swap(w,b);
                }
            }
            cnt &= 1;
            if (cnt)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            for (int j = 1; j <= m; j++)
            {
                cnt = 0;
                for (int i = 1; i <= n; i++)
                {
                    if (a[i][j] == 'L')
                    {
                        cnt++;
                        a[i][j] = w;
                        a[i][j+1] = b;
                        swap(w, b);
                    }
                }
                cnt &= 1;
                if (cnt)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 0)cout << "-1\n";
        else
        {
            for (int i = 1; i <= n; i++)cout << a[i] + 1<<'\n';
        }
    }
    return 0;
}
