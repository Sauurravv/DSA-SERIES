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
    cout << "Null" << endl;
}

void insertatHead(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

// Printing the Length of Linked list
int LengthofLL(Node *head)
{
    int count = 0;
    Node *temp = head;

    while (temp != nullptr)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

bool searchelement(Node *head, int val)
{
    Node *temp = head;
    while (temp)
    {
        if (temp->value == val)
            return true;
        temp = temp->next;
    }
    return false;
}

int main()
{
    Node *node1 = new Node(1);
    Node *node2 = new Node(2);

    node1->next = node2;
    Node *head = node1;
    // printing linked list
    traverse(head);

    // printing linked list with adding 5 at head
    insertatHead(head, 5);
    traverse(head);

    // printing the length of linked list
    cout << "Length of linked list is: " << LengthofLL(head) << endl;

    //
    cout << boolalpha << searchelement(head, 4);

    return 0;
}