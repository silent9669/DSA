#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s1, s2;
  cin >> s1 >> s2;
  
  for (size_t i = 0; i < s1.size(); i++){
    s1[i] = tolower(s1[i]);
    s2[i] = tolower(s2[i]);
  }


  if (s1 == s2) cout << 0;
  else if (s1 < s2) cout << -1;
  else if (s1 > s2) cout << 1;

  return 0;
}
