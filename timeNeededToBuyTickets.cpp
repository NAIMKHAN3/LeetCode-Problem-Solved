#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {
        queue<int> q;
        queue<int> inx;
        int s = 0;
        for (int i = 0; i < tickets.size(); i++)
        {
            q.push(tickets[i]);
            inx.push(i);
        }
        while (true)
        {

            if (q.front() > 0)
            {
                s++;
                if (inx.front() == k && q.front() == 1)
                    break;
                q.push(q.front() - 1);
                q.pop();
                inx.push(inx.front());
                inx.pop();
            }
            else
            {
                if (inx.front() == k && q.front() == 1)
                    break;
                q.push(q.front());
                q.pop();
                inx.push(inx.front());
                inx.pop();
            }
        }
        return s;
    }
};

class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {
        queue<int> q;
        int s = 0;
        for (int i = 0; i < tickets.size(); i++)
        {
            q.push(tickets[i]);
        }
        while (true)
        {
            q.front()--;
            s++;
            if (k == 0 && q.front() == 0)
                break;
            if (k == 0)
                k = q.size() - 1;
            else
                k--;
            if (q.front() != 0)
                q.push(q.front());
                q.pop();
        }
        return s;
        
    }
    
};