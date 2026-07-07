#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    string prev,cur;
    cin >> prev;

    int count = 1;
    for (int i = 1; i < n; i++){
        cin >> cur;
        if (prev != cur){
            count++;
        }
        prev = cur;
    }

    cout << count;

    return 0;
}
