#include <bits/stdc++.h>

using namespace std;

class MinStack {
public:
stack<int> st;
stack<int> min;
int minValue = NULL;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(!min.size()){
            min.push(val);
        }else{
            int v = min.top();
            if(val < v){
                min.push(val);
            }else{
                min.push(v);
            }
        }
       

    }
    
    void pop() {
        st.pop();
        min.pop();
    }
    
    int top() {
      return  st.top();
    }
    
    int getMin() {
        // cout << minValue;
        return min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */