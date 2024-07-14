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

     bool isEmpty() {
        return size == 0;
    }

    void enqueue(int data) {
        Node *newNode = new Node(data);
        if (isEmpty()) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }
    

    int dequeue() {
        if (isEmpty()) {
            return -1;
        }
        int value = head->data;
        Node *temp = head;
        head = head->next;
        if (head == NULL) {
            tail = NULL;
        }
        delete temp;
        size--;
        return value;
    }

    int front() {
        if (isEmpty()) {
            return -1;
        }
        return head->data;
    }
};