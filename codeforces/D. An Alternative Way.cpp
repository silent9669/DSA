#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        long long cur = 0;
        bool ok = true;

        for (int i = 0; i < n; i++) {
            cur += b[i] - a[i];

            if (cur < 0) {
                ok = false;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}   
