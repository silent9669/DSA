#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  int left = 0;
  while (n--) {
    if (n % 2 == 0) {
      for (int i = 0; i < m; i++) {
        cout << "#";
      }
    } else {
      if (left == 0) {
        for (int i = 0; i < m - 1; i++) {
          cout << ".";
        }
        cout << "#";
        left++;
      } else {
        cout << "#";
        for (int i = 0; i < m - 1; i++) {
          cout << ".";
        }
        left--;
      }
    }

    cout << "\n";
  }

  return 0;
}
