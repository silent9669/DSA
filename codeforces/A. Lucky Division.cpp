#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> lucky = 
    {4, 7, 44, 47, 74, 77, 
    444, 447, 474,  477, 
    744, 747, 774, 777 };

    bool ok = false;

    for (int x : lucky){
        if (n % x == 0){
            ok = true;
            break;
        }
    }

    if (ok) cout << "YES";
    else cout << "NO";

    return 0;
}
