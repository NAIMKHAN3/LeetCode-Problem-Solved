#include <bits/stdc++.h>
using namespace std;
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/
class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };
class Stack
{
    //Write your code here

public:
int size = 0;
Node * head = NULL;
Node * tail = NULL;
    Stack()
    {
        //Write your code here
    }

    int getSize()
    {
        return size;
        //Write your code here
    }

    bool isEmpty()
    {
        return size == 0;
        //Write your code here
    }

   void push(int data) {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        size++;
    }

    void pop() {
        if (isEmpty()) {
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
        size--;
    }

    int getTop() {
        if (isEmpty()) {
            return -1;
        }
        return head->data;
    }
};