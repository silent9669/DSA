#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    int mil_toast = (k * l) / nl;
    int lime_toast = c * d;
    int salt_toast = p / np; 

    int toast = min({mil_toast, lime_toast, salt_toast});
    cout << toast/n;

    return 0;
}
