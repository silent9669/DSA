#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        vector<int> pref1(n + 1, 0), pref2(n + 1, 0);

        for (int i = 0; i < n; i++){
            int v1, v2;

            if (a[i] == 1) v1 = 1;
            else v1 = -1;

            if (a[i] == 3) v2 = -1;
            else v2 = 1;

            pref1[i + 1] = pref1[i] + v1;
            pref2[i + 1] = pref2[i] + v2;
        }

        vector<int> sufMax(n + 1, -1e9);

        for (int i = n - 1; i >= 0; i--){
            sufMax[i] = max(sufMax[i + 1], pref2[i]);
        }

        bool ok = false;

        for (int x = 1; x <= n - 2; x++){
            if (pref1[x] >= 0 && sufMax[x + 1] >= pref2[x]) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}
      
