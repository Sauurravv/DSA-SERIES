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
    traverse(head);

    return 0;
}