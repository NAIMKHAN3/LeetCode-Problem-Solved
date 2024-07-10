#include <bits/stdc++.h> 
using namespace std;
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    stack<int> newSt;
    while (!myStack.empty()) {
        newSt.push(myStack.top());
        myStack.pop();
    }
    myStack.push(x);
    while (!newSt.empty()) {
        myStack.push(newSt.top());
        newSt.pop();
    }
    return myStack;
}