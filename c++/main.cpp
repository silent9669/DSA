//
//  main.cpp
//  c++
//
//  Created by phucdang on 21/5/26.
//
#include "main.h"

int main() {
  const int a = 1;
  int b = 2;
  const int *const p = &a;
  *(int *)p = 0;

  cout << a << " " << *p << " " << *(&a) << " ";
  *(int **)&p = &b;
  cout << b << " " << *p;
}
