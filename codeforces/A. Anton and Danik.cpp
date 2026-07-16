#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  string s;
  cin >> s;

  int A = 0;
  int B = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'A') {
      A++;
    } else {
      B++;
    }
  }

  if (A > B) {
    cout << "Anton";
  }
  if (B > A) {
    cout << "Danik";
  }
  if (A == B) {
    cout << "Friendship";
  }

  return 0;
}
