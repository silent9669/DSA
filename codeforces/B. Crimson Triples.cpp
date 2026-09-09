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

        long long ans = 0;

        for (int b = 1; b <= n; b++) {
            long long cnt = n / b;
            ans += cnt * cnt;
        }

        cout << ans << '\n';
    }

    return 0;
}
