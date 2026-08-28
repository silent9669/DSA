#include<bits/stdc++.h>
using namespace std;
/* Quadratic order (recursive implementation) */
int quadraticRecur(int n) {
    if (n <= 0)
        return 0;
    vector<int> nums(n);
    cout << "In recursion n = " << n << ", nums length = " << nums.size() << endl;
    return quadraticRecur(n - 1);
}
