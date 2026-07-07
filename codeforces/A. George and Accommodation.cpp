#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    int count = 0;
    while (n--){
        int a,b;
        cin >> a >> b;
        
        if (b - a >= 2) count++;
    }

    cout << count;

    return 0;
}
