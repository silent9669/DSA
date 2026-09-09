#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    int count = 0;
    stack<char> myStack;

    while(n--){
        char c;
        cin >> c;

        if (myStack.empty() || myStack.top() != c){
            myStack.push(c);
        }
        else {
            count++;
        }
    }

    cout << count;

    return 0;
}
