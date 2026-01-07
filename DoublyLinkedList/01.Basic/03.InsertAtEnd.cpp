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
        next = nullptr;
        prev = nullptr;
    }
    friend class DLinkedList;
};
class DLinkedList
{
private:
    Node *head;

public:
    DLinkedList(int val)
    // DLinkedList()
    {
        head = new Node(val); // and change 'new Node (val)' = NULL/nullptr
                              //  head = NULL;
    }
    void insertAtEnd(int val)
    {
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }

    void traverse()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
    }
};
int main()
{

    // if you don't want to do this
    // you can just make object and don't pass the value
    DLinkedList dll(1);

    // DLinkedList dll;
    dll.insertAtEnd(3);
    dll.insertAtEnd(5);
    dll.insertAtEnd(7);
    dll.traverse();
}
