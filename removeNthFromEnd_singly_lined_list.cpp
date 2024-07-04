#include<bits/stdc++.h>

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
            count ++;
            head = head->next;
        }
        return count;
    }
public:
    ListNode* removeNthFromEnd(ListNode*& head, int n) {
        int idx = size(head) - n;
        if(idx == 0){
            ListNode * deleteNode = head;
            head = head->next;
            delete deleteNode;
            return head;
        }
        ListNode * temp = head;
        for(int i = 0; i< idx-1; i++){
            temp = temp->next;
        }
            ListNode * deleteNode = temp->next;
        if(temp->next->next == NULL){
            temp->next = NULL;
            delete deleteNode;
        }else{
           temp->next = temp->next->next;
        }
        return head;
    }
};