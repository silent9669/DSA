#include <bits/stdc++.h>
using namespace std;

int SumGCD(int n){
  int sum = 0;
  for (int i = 1; i <= sqrt(n); ++i){
    if (n % i == 0){
      sum += i;
      if (i != n / i){
        sum += n/i;
      }
    }
  }
  return sum;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int left, right;
  cin >> left >> right;
  
  int count = 0; 
  for (int i = left; i <= right; i++){
    if (SumGCD(i) - i > i){
      count++;
    }
  }
  cout << count;

  return 0;
}
