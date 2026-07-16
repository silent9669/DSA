#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, c;
    cin >> n >> c;

    vector<int> a(n), b(n);
    int sumA = 0, sumB = 0;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      sumA += a[i];
    }

    for (int i = 0; i < n; i++) {
      cin >> b[i];
      sumB += b[i];
    }

    const int INF = 1e9;
    int ans = INF;

    // Cách 1: không reorder
    bool ok = true;
    int cost = 0;

    for (int i = 0; i < n; i++) {
      if (a[i] < b[i]) {
        ok = false;
        break;
      }
      cost += a[i] - b[i];
    }

    if (ok)
      ans = min(ans, cost);

    // Cách 2: reorder một lần
    vector<int> sa = a, sb = b;
    sort(sa.begin(), sa.end());
    sort(sb.begin(), sb.end());

    ok = true;
    for (int i = 0; i < n; i++) {
      if (sa[i] < sb[i]) {
        ok = false;
        break;
      }
    }

    if (ok) {
      ans = min(ans, c + sumA - sumB);
    }

    if (ans == INF)
      cout << -1 << '\n';
    else
      cout << ans << '\n';
  }

  return 0;
}
