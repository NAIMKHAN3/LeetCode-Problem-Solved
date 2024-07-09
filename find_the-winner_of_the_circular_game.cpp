#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int findTheWinner(int n, int k)
    {
        queue<int> q;
        for (int i = 1; i <= n; i++)
        {
            q.push(i);
        }
        int count = 0;
        while (q.size() > 1)
        {
            count++;
            int newV = q.front();
            q.pop();
            if(count !=  k){
                q.push(newV);
            }else{
                count = 0;
            }
        }
        return q.front();
    }
};