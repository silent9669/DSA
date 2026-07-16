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

    string s;
    cin >> s;

    int current = 0;
    int longest = 0;

    for (char c : s) {
      if (c == '#') {
        current++;
        longest = max(longest, current);
      } else {
        current = 0;
      }
    }

    cout << (longest + 1) / 2 << '\n';
  }

  return 0;
}
