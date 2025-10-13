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
void traverse(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULL";
    cout << endl;
}
void search(Node *&head, int val)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        if (ptr->value = val)
        {
            cout << "Element " << val << " found" << endl;
            return;
        }
        ptr = ptr->next;
    }
    cout << "Element " << val << " not found" << endl;
}

int main()
{
    Node *head = nullptr;

    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    traverse(head);

    search(head, 5);
    search(head, 6);
    return 0;
}