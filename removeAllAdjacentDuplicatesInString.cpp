#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(char c : s) {
            if(!st.empty()){
                if(st.top() == c) st.pop();
                else st.push(c);
            }else{
                st.push(c);
            }
        }
        string res = "";
        while(!st.empty()){
            res =  st.top() + res;
            st.pop();
        }
        return res;
    }
};