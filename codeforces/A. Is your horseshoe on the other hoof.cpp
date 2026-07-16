#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  set<long long> colors;

  for (int i = 0; i < 4; i++) {
    long long x;
    cin >> x;
    colors.insert(x);
  }

  cout << 4 - colors.size();

  return 0;
}
