#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    string result = "";
    for (int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);

        if (s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' &&
            s[i] != 'u' && s[i] != 'i'){
            result += '.';
            result += s[i];
        }
    }
    
    cout << result;

    return 0;
}
