#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int val)
    {
        value = val;
        next = nullptr;
        prev = nullptr;
    }
};

void insertEnd(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->prev = nullptr;
    newNode->next = nullptr;

    // If list is empty
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
    newNode->prev = temp;
}

void insertSpecific(Node *&head, int val, int pos)
{
    Node *newNode = new Node(val);

    if (pos == 1)
    {
        newNode->next = head;
        if (head != nullptr)
            head->prev = newNode;
        head = newNode;
        return;
    }

    if (head == nullptr)
    {
        cout << "List is empty\n";
        return;
    }

    Node *temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Position " << pos << "doesn't exists in the list \n";
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    if (newNode->next != NULL)
    {
        newNode->next->prev = newNode;
    }
    temp->next = newNode;
}

void printForward(Node *head)
{
    Node *temp = head;
    cout << "Forward: ";
    while (temp != nullptr)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printBackward(Node *head)
{
    if (head == nullptr)
        return;

    Node *temp = head;

    // Move to last node
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    cout << "Backward: ";
    while (temp != nullptr)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = nullptr;

    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    insertEnd(head, 40);

    printForward(head);
    printBackward(head);

    insertSpecific(head, 50, 5);
    printForward(head);
    printBackward(head);

    return 0;
}
