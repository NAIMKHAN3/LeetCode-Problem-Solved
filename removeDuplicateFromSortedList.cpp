#include <bits/stdc++.h>

using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode(int x) : val(x), next(NULL), prev(NULL) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode*& head) {
        ListNode dummy(0);
        dummy.next = head;
        
        ListNode* prev = &dummy;
        ListNode* current = head;
        
        while (current) {
            bool isDuplicate = false;
            while (current->next && current->val == current->next->val) {
                isDuplicate = true;
                current = current->next;
            }
            if (isDuplicate) {
                prev->next = current->next;
            } else {
                prev = prev->next;
            }
            current = current->next;
        }
        return dummy.next;
    }
};


