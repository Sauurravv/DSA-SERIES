// Input: LinkedList = 2 -> 3 -> 4 -> 5, newData = 1, key = 2
// Output: LinkedList = 2 -> 1 -> 3 -> 4 -> 5

// Input: LinkedList = 1 -> 3 -> 5 -> 7, newData = 1, key = 2
// Output: Node not found

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

void traverse(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

Node *InsertAtGivenNode(Node *head, int val, int key)
{
    if (head == nullptr)
    {
        cout << "Node not found" << endl;
        return head;
    }

    Node *curr = head;
    while (curr != nullptr)
    {
        if (curr->value == key)
        {
            break;
        }
        curr = curr->next;
    }
    Node *newnode = new Node(val);
    newnode->next = curr->next;
    curr->next = newnode;

    return head;
}

int main()
{
    Node *node1 = new Node(2);
    Node *node2 = new Node(3);
    Node *node3 = new Node(4);
    Node *node4 = new Node(5);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    Node *head = node1;

    cout << "Orginal linked list: ";
    traverse(head);
    cout << endl;

    cout << "After Insertion at given Node: ";
    InsertAtGivenNode(head, 1, 2);
    traverse(head);
    cout << endl;
}