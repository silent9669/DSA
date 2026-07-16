#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;

  cin >> t;

  while (t--) {

    int n;

    cin >> n;

    long long prefixSum = 0;

    bool possible = true;

    for (long long i = 1; i <= n; i++) {

      long long x;

      cin >> x;

      prefixSum += x;

      long long required = i * (i + 1) / 2;

      if (prefixSum < required) {

        possible = false;
      }
    }

    cout << (possible ? "YES" : "NO") << '\n';
  }

  return 0;
}
