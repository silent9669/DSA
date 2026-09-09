#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int b = 0;
    int c = 0;

    while (n--)
    {
        int a;
        cin >> a;

        if (a > 0)
        {
            b += a;
        }
        else
        {
            if (b > 0)
            {
                b--;
            }
            else
            {
                c++;
            }
        }
    }
    cout << c << "\n";

    return 0;
}