#include <bits/stdc++.h> 
using namespace std;

void reverseArray(vector<int> &arr , int m) {
    stack<int> st;
    int n = arr.size(); 
    for(int i = m+1; i <n; i ++){
        st.push(arr[i]);
        arr.pop_back();
    } 
    while(!st.empty()){
        arr.push_back(st.top());
        st.pop();
    }   	
}