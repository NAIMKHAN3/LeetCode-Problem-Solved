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

int size(ListNode* head) {
    int s = 0;
    while (head != NULL) {
        head = head->next;
        s++;
    }
    return s;
}

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        int s = size(head);
        if(head == NULL || head->next == NULL){
            head = NULL;
            return head;
        }
        int m = s / 2;
        cout << m << endl;
        ListNode* temp = head;
        for (int i = 1; i < m; i++) {
            temp = temp->next;
        }
        ListNode* deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;
        return head;
    }
};


