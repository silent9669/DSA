#include <bits/stdc++.h>
using namespace std;

class DSU {
private:
  vector<int> parent;
  vector<int> size;

public:
  DSU(int n) {
    parent.resize(n + 1);
    size.assign(n + 1, 1);

    iota(parent.begin(), parent.end(), 0);
  }

  int find(int u) {
    if (u == parent[u]) {
      return u;
    }

    return parent[u] = find(parent[u]);
  }

  void unite(int u, int v) {
    u = find(u);
    v = find(v);

    if (u == v) {
      return;
    }

    if (size[u] < size[v]) {
      swap(u, v);
    }

    parent[v] = u;
    size[u] += size[v];
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> p(n + 1);

    for (int i = 1; i <= n; i++) {
      cin >> p[i];
    }

    DSU dsu(n);

    for (int i = 1; i <= n; i++) {
      if (i + x <= n) {
        dsu.unite(i, i + x);
      }

      if (i + y <= n) {
        dsu.unite(i, i + y);
      }
    }

    bool possible = true;

    for (int i = 1; i <= n; i++) {
      if (dsu.find(i) != dsu.find(p[i])) {
        possible = false;
        break;
      }
    }

    cout << (possible ? "YES" : "NO") << '\n';
  }

  return 0;
}
