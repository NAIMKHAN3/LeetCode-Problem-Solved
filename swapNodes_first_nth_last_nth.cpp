#include<bits/stdc++.h>

using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
};

class Solution {
    int size(ListNode * head){
        int count = 0;
        while(head != NULL){
            count++;
            head = head->next;
        }
        return count;
    }
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int last_pos = size(head)- k;
        ListNode * firstNode = head;
        ListNode * lastNode = head;
        for(int i = 0; i < k-1; i++){
            firstNode = firstNode->next;
        }
        for(int i = 0; i < last_pos; i++){
            lastNode = lastNode->next;
        }
        swap(firstNode->val, lastNode->val);
        return head;
    }
};