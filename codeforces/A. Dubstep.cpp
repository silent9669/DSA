#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    string result = "";
    bool needSpace = false;
    for (int i = 0; i < (int)s.size();){
        if (i + 2 < s.size() && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B'){
            if (!result.empty()){
                needSpace = true;
            }

            i += 3;
        }
        else{
            if (needSpace){
                result += ' ';
                needSpace = false;
            }

            result += s[i];
            i++;
        }
    }

    cout << result;

    return 0;
}
