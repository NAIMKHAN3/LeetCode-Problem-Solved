#include <bits/stdc++.h> 
using namespace std;
queue<int> reverseQueue(queue<int> q)
{
   stack<int> st;
   while(!q.empty()){
       st.push(q.front());
       q.pop();
   }
   queue<int> nq;
   while(!st.empty()){
       nq.push(st.top());
       st.pop();
   }
   return nq;
}