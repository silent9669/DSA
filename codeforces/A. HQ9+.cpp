#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    
    bool ok = false;

    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'H'|| s[i] == 'Q' || s[i] == '9'){
            ok = true;
            break;
        }
    }
    
    if (ok) cout << "YES";
    else cout << "NO";

    return 0;
}
