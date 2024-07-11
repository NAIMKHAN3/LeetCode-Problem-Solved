#include <bits/stdc++.h>

using namespace std;



class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        for(string s: logs){
            cout << s << endl;
            if(s == "../" && !st.empty()) st.pop();
            else if(s != "./" && s != "../") st.push(s);
        }
        int step = 0;
        while(!st.empty()){
            st.pop();
            step++;
        }
        return step;
    }
};