#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int val)
    {
        value = val;
        next = nullptr;
    }
};
void insertAtHead(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

void deleteFirstNode(Node *&head)
{
    // if (head = NULL)
    // {
    //     cout << "The List is empty";
    //     return;
    // }
    Node *temp = head;
    head = head->next;
    delete temp;
}

void traverse(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
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
    cout << endl;

    insertAtHead(head, 5);
    traverse(head);
    cout << endl;

    deleteFirstNode(head);
    traverse(head);

    return 0;
}