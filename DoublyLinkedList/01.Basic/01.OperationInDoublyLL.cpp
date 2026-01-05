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
    // Friend class
    friend class DLinkedList;
};

class DLinkedList
{
private:
    Node *head;
    Node *tail;

public:
    DLinkedList()
    {
        head = tail = NULL;
    }

    void InsertAtBeginning(int val)
    {
        Node *newNode = new Node(val);
        if (head != NULL)
        {
            newNode->next = head;
            head->prev = newNode;
        }
        head = newNode;
    }

    void InsertAtEnd(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }

    void displayForward()
    {
        Node *temp = head;
        cout << "Forward: ";
        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    DLinkedList dll;
    dll.InsertAtBeginning(2);
    dll.InsertAtBeginning(1);
    dll.InsertAtEnd(5);

    dll.displayForward();

    return 0;
}