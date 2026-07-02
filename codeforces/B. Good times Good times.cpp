#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while (n--){
        long long a;
        cin >> a;

        long long p = 1;
        long long temp = a;

        while (temp > 0){
            p *= 10;
            temp /= 10;
        }
        
        long long b = p + 1;
        cout << b << endl;
       
    }
    return 0;
}
