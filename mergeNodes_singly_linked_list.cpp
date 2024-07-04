#include<bits/stdc++.h>

using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val){
        this->val = val;
        this->next = NULL;
    }
};

class Solution {
    void insert_a_tail (ListNode *& head, ListNode *& tail, int val){
        ListNode * newNode = new ListNode(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
 
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode * newHead = NULL;
        ListNode * tail = NULL;
        int sum = 0;
        ListNode * temp = head->next;
        while(temp->next != NULL){
            sum += temp->val;
            if(temp->next->val == 0){
            insert_a_tail(newHead, tail, sum);
            sum = 0;
            }
            temp = temp->next;
        }
    return newHead;
    };
};