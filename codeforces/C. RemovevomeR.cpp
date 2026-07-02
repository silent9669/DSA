#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while (n--){
        int t;
        string s;
        cin >> t >> s;

        int runs = 1;
        for (int i = 1; i < t; i++){
            if (s[i] != s[i - 1]){
                runs++;
            }
        }

        if (runs == 2) cout << "2" << endl;
        else cout << "1" << endl;
       
    }

    return 0;
}
