#include <bits/stdc++.h>
using namespace std;

bool can(int n, int m){
    if (n == m) return true;
    else if (n < m) return false;
    else if (n % 3 != 0) return false;

    return can(n / 3, m) || can(2 * n / 3, m);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        int n,m;
        cin >> n >> m;

        if(can(n, m)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
