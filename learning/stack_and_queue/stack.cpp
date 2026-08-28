#include<bits/stdc++.h>
using namespace std;

/* Initialize stack */
stack<int> stack;

/* Push elements */
stack.push(1);
stack.push(3);
stack.push(2);
stack.push(5);
stack.push(4);

/* Access top element */
int top = stack.top();

/* Pop element */
stack.pop(); // No return value

/* Get stack length */
int size = stack.size();

/* Check if empty */
bool empty = stack.empty();
