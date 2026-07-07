#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string n;
    cin >> n;
    
    int cnt = 0;

    for (int i = 0; i < n.size(); i++){
        if (n[i] == '4' || n[i] == '7'){
            cnt++;
        }
    }

    if (cnt == 4 || cnt == 7) cout << "YES";
    else cout << "NO";

    return 0;
}
