#include <iostream>
#include <list>
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

void traverse(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insert(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = nullptr;
    if (head == nullptr)
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
}

int main()
{
    Node *head = nullptr;
    traverse(head);

    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    traverse(head);
    return 0;
}