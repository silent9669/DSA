#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;

  bool valid = true;

  for (int i = 1; i < s.size(); i++) {
    if (islower(s[i])) {
      valid = false;
      break;
    }
  }

  if (valid) {
    for (char &c : s) {
      if (islower(c)) {
        c = toupper(c);
      } else {
        c = tolower(c);
      }
    }
  }

  cout << s;

  return 0;
}
