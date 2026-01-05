#include <bits/stdc++.h>
using namespace std;

class DLinkedList;
class Node
{
private:
    int value;
    Node *next;
    Node *prev;

public:
    Node(int val)
    {
        value = val;
        next = prev = NULL;
    }
    friend class DLinkedList;
};
class DLinkedList
{
private:
    Node *head;

public:
    DLinkedList()
    {
        head = NULL;
    }

    void InsertAtBeginning(int val)
    {
        Node *newNode = new Node(val);
        // if (head == NULL)
        // {
        //     head = newNode;
        //     return;
        // }
        if (head != NULL)
        {
            newNode->next = head;
            head->prev = newNode;
        }
        head = newNode;
    }

    void traverse()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    DLinkedList dll;
    dll.InsertAtBeginning(5);
    dll.InsertAtBeginning(10);

    dll.traverse();
    return 0;
}