#include <cstdio>
#include <cstring>

const int N = 3010;

char g[N][N];
int a[N][N], b[N][N], c[N][N];

void solve()
{
    int n; // Declare the variable 'n'
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", g[i] + 1);
    }
    int ret = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            a[i][j] = a[i - 1][j - 1];
            b[i][j] = b[i - 1][j + 1];
            c[i][j] = c[i - 1][j] ^ a[i - 1][j - 1] ^ b[i - 1][j + 1];
            if (c[i][j] ^ (g[i][j] - '0'))
            {
                ret++;
                a[i][j] ^= 1;
                b[i][j] ^= 1;
                c[i][j] ^= 1;
            }
        }
    }
    printf("%d\n", ret);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
    return 0;
}
