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

        vector<int> a(n);

        for (int &x : a)
            cin >> x;

        int firstOne = -1;
        int lastOne = -1;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                if (firstOne == -1)
                    firstOne = i;

                lastOne = i;
            }
        }

        // No existing 1
        if (firstOne == -1)
        {
            int firstMinus = -1;
            int lastMinus = -1;

            for (int i = 0; i < n; i++)
            {
                if (a[i] == -1)
                {
                    if (firstMinus == -1)
                        firstMinus = i;

                    lastMinus = i;
                }
            }

            // First make all -1 -> 0
            for (int i = 0; i < n; i++)
            {
                if (a[i] == -1)
                    a[i] = 0;
            }

            // Put 1 at the extreme possible positions
            if (firstMinus != -1)
            {
                a[firstMinus] = 1;
                a[lastMinus] = 1;
            }
        }

        // There is at least one existing 1
        else
        {
            int leftMinus = -1;
            int rightMinus = -1;

            // leftmost -1 before first 1
            for (int i = 0; i < firstOne; i++)
            {
                if (a[i] == -1)
                {
                    leftMinus = i;
                    break;
                }
            }

            // rightmost -1 after last 1
            for (int i = n - 1; i > lastOne; i--)
            {
                if (a[i] == -1)
                {
                    rightMinus = i;
                    break;
                }
            }

            // All -1 -> 0
            for (int i = 0; i < n; i++)
            {
                if (a[i] == -1)
                    a[i] = 0;
            }

            // Add extreme 1s
            if (leftMinus != -1)
                a[leftMinus] = 1;

            if (rightMinus != -1)
                a[rightMinus] = 1;
        }

        for (int x : a)
            cout << x << ' ';

        cout << '\n';
    }
}