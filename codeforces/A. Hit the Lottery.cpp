#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n;
  cin >> n;

  int money[] = {100, 20, 10, 5, 1};
  long long answer = 0;

  for (int value : money) {
    answer += n / value;
    n %= value;
  }

  cout << answer;

  return 0;
}
