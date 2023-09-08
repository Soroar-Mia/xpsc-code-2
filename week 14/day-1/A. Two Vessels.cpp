#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c,e;
        cin >> a >> b >> c;

        if (a > b)
        {
            swap(a, b);
        }

        if (a == b)
        {
            cout << "0\n";
        }
        else if (a + c == b-c)
        {
            cout << "1\n";
        }
        else
        {
            int d= b - a;
            if(d%2==0)e=d/2;
            else e=(d/2)+1;

            if (e%c==0)
            {
                int ans=e/c;
                cout<<ans<<endl;
            }
            else
            {
                int ans=(e/c) +1;
                cout<<ans<<endl;
            }
        }
    }

    return 0;
}


