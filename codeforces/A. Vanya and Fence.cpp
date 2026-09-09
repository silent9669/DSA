#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,h;
    cin >> n >> h;
    
    int w = 0;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;

        if (a <= h) w++;
        else if (a > h) w += 2;
    }

    cout << w;
    
    return 0;
}
