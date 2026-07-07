#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int k;
        cin >> k;

        bool ok = false;
        int count = 0;
        for (int i = 0; i < k; i++){
            long long c;
            cin >> c;

            if (c >= 3) ok = true;
            if (c >= 2) count++; 
        }

        if (count >= 2) ok = true;
        
        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}
