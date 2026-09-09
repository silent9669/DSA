#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);
        int cnt0 = 0;

        for (auto &x : a)
        {
            cin >> x;
            if (x == 0)
                cnt0++;
        }

        // Exactly one zero -> impossible
        if (cnt0 == 1)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        string ans(n, 'A');

        // No zero: everything in A
        if (cnt0 == 0)
        {
            cout << ans << '\n';
            continue;
        }

        // At least two zeros
        int zeros = 0;

        for (int i = 0; i < n; i++)
        {

            if (a[i] != 0)
            {
                // all non-zero values go to C
                ans[i] = 'C';
            }
            else
            {
                zeros++;

                if (zeros == 1)
                    ans[i] = 'A';

                else if (zeros == 2)
                    ans[i] = 'B';

                else
                    ans[i] = 'A';
            }
        }

        cout << ans << '\n';
    }
}