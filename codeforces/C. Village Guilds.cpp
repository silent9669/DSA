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

        vector<vector<int>> child(n + 1);

        for (int i = 2; i <= n; i++) {
            int p;
            cin >> p;
            child[p].push_back(i);
        }

        vector<int> depth(n + 1, 0);
        vector<int> order;
        order.reserve(n);

        order.push_back(1);

        for (int i = 0; i < n; i++) {
            int v = order[i];

            for (int u : child[v]) {
                depth[u] = depth[v] + 1;
                order.push_back(u);
            }
        }

        vector<int> maxDepth = depth;

        for (int i = n - 1; i >= 0; i--) {
            int v = order[i];

            for (int u : child[v]) {
                maxDepth[v] = max(maxDepth[v], maxDepth[u]);
            }
        }

        long long ans = maxDepth[1] + 1;

        for (int v = 1; v <= n; v++) {
            if ((int)child[v].size() < 2) continue;

            int mx1 = -1, mx2 = -1;

            for (int u : child[v]) {
                int x = maxDepth[u];

                if (x > mx1) {
                    mx2 = mx1;
                    mx1 = x;
                } else if (x > mx2) {
                    mx2 = x;
                }
            }

            for (int u : child[v]) {
                ans += min(maxDepth[u], mx2) - depth[v];
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
