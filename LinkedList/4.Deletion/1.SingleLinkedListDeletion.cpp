#include <iostream>
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
    cout << "NUll" << endl;
}

Node *head = NULL;

void Insert(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void deleteFirstNode(Node *&head)
{
    if (head == NULL)
    {

        return;
    }

    Node *temp = head;
    head = head->next;
    delete temp;
}

void deleteLastNode(Node *&head)
{
    if (head == NULL)
    {
        return;
    }

    // checking if linked list have only one
    // elements or more
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }

    Node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
        return;
    }
    delete temp->next;
    temp->next = NULL;
}

int main()
{
    Insert(head, 5);
    Insert(head, 4);
    Insert(head, 3);

    deleteFirstNode(head);
    deleteLastNode(head);
    traverse(head);
}