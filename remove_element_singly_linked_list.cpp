#include<bits/stdc++.h>

class ListNode
{
public:
    int val;
    ListNode *next;
};

class Solution
{
public:
    ListNode *removeElements(ListNode *&head, int val)
    {
        if (head == NULL)
            return head;
        while (head != NULL && head->val == val)
        {
            if (head->next == NULL)
            {
                ListNode *deleteNode = head;
                head = NULL;
                delete deleteNode;
                return head;
            }
            ListNode *deleteNode = head;
            head = head->next;
            delete deleteNode;
        }

        ListNode *temp = head;
        while (temp != NULL && temp->next != NULL)
        {
            if (temp->next->val == val)
            {
                ListNode *deleteNode = temp->next;
                temp->next = temp->next->next;
                delete deleteNode;
            }
            if (temp->next != NULL && temp->next->val != val)
            {

                temp = temp->next;
            }
        }
        return head;
    }
};