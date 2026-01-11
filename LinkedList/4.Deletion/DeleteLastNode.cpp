#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = nullptr;
    }
};

void traverse(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

void deleteLastNode(Node *head)
{
    Node *temp = head;
    if (head == nullptr)
        return;

    if (head->next = nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }

    while (temp->next->next == nullptr)
    {
        temp = temp->next;
    }
    delete temp;
    
}

int main()
{

    Node *node1 = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);

    node1->next = node2;
    node2->next = node3;
    Node *head = node1;

    traverse(head);
    return 0;
}