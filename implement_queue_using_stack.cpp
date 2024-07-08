#include<bits/stdc++.h>

using namespace std;


class MyQueue {
public:
stack<int> s;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        int v;
        stack<int> s2;
        while(!s.empty()){
            v = s.top();
            s.pop();
            if(s.empty())break;
            s2.push(v);
        }
        while(!s2.empty()){
            s.push(s2.top());
            s2.pop();
        }
        return v;
    }
    
    int peek() {
         int v;
        stack<int> s2;
        while(!s.empty()){
            v = s.top();
            s.pop();
            s2.push(v);
        }
        while(!s2.empty()){
            s.push(s2.top());
            s2.pop();
        }
        return v;
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */