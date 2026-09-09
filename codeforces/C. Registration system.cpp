#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  unordered_map<string, int> map;

  while (n--) {
    string name;
    cin >> name;

    if (map.find(name) == map.end()) {
      cout << "OK\n";
      map[name] = 1;
    } else {
      cout << name << map[name] << "\n";
      map[name]++;
    }
  }

  return 0;
}
