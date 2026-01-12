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

Node *insertAtHead(Node *head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = tail = newNode;
        tail->next = head;
        return head;
    }

    else
        newNode->next = head;
    head = newNode;
    tail->next = head;

    return head;
}
Node *insertAtMiddle(Node *head, Node *&tail, int val, int pos)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = tail = newNode;
        tail->next = head;
        return head;
    }
    if (pos == 1)
    {
        newNode->next = head;
        head = newNode;
        tail->next = head;
        return head;
    }

    Node *temp = head;
    int count = 1;

    // Move to (pos-1)th node or stop at tail
    while (count < pos - 1 && temp->next != head)
    {
        temp = temp->next;
        count++;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    // If inserted at last position, update tail
    if (temp == tail)
        tail = newNode;

    return head;
}
void traverse(Node *head)
{
    if (head == NULL)
        return;

    Node *temp = head;
    do
    {
        cout << temp->value << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    head = insertAtHead(head, tail, 5);
    head = insertAtHead(head, tail, 10);

    head = insertAtMiddle(head, tail, 5, 1);
    head = insertAtMiddle(head, tail, 10, 2);
    traverse(head);

    return 0;
}