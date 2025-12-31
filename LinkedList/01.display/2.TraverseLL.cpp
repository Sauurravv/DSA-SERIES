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
        next = NULL;
    }
};

// Create a Function for tranverse
void traverse(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << "Null" << endl;
}

int main()
{
    Node *node1 = new Node(2);
    Node *node2 = new Node(4);
    Node *node3 = new Node(6);
    node1->next = node2;
    node2->next = node3;
    Node *head = node1;
    traverse(head);
}