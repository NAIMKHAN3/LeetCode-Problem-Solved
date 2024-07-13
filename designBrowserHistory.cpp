#include <bits/stdc++.h>

using namespace std;



class BrowserHistory {
    list<string> lst;
public:
    BrowserHistory(string homepage) {
        lst.push_back(homepage);
    }
    
    void visit(string url) {
        lst.push_back(url);
    }
    
    string back(int steps) {
        string s = lst.front();
        lst.pop_back();
        return s;
    }
    
    string forward(int steps) {
        
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */