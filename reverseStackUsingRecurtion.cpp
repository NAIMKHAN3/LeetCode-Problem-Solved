
#include <bits/stdc++.h>
using namespace std;
void reverseStack(stack<int> &st) {
   if(st.empty()) return;
   int temp = st.top();
   st.pop();
   reverseStack(st);
   stack<int> newS;
   while(!st.empty()) {
     newS.push(st.top());
     st.pop();
   }
   newS.push(temp);
   while(!newS.empty()) {
     st.push(newS.top());
     newS.pop();
   }

}