#include <bits/stdc++.h> 
using namespace std;
void sortStack(stack<int> &stack)
{
	vector<int> a;
	while(!stack.empty()){
		a.push_back(stack.top());
        stack.pop();
	}
    sort(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++){
        stack.push(a[i]);  
        
    }
}