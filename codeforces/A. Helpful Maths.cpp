#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> numbers;
    int nums;
    char plus;
    
    cin >> nums;
    numbers.push_back(nums);
    while (cin >> plus >> nums){
        numbers.push_back(nums);
    }

    sort(numbers.begin(), numbers.end());
    for (size_t i = 0; i < numbers.size(); i++){
        cout << numbers[i];
        if (i < numbers.size() - 1){
            cout << "+";
        }
    }
    cout << "\n";

    return 0;
}
