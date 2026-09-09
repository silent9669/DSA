#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == b + c)
        {
            cout << "YES\n";
        }
        else if (b == a + c)
        {
            cout << "YES\n";
        }
        else if (c == a + b)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}