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

void traverse(Node *&head)
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
    newNode->next = head;
    head = newNode;
}
void deleteNodeatPosition(Node *&head, int pos)
{
    if (head == NULL)
    {
        return;
    }

    Node *temp = head;
    if (pos == 1)
    {
        head = temp->next;
        delete temp;
        return;
    }
    for (int i = 1; temp != NULL && i < pos - 1; i++)
    {
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    insert(head, 5);
    insert(head, 4);
    insert(head, 3);
    insert(head, 2);
    insert(head, 1);

    traverse(head);
    return 0;
}