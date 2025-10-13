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
    cout << "NULL";
    cout << endl;
}

void *insertatMiddle(Node *&head, int val)
{
    // if head is null then add new Node
    if (head == nullptr)
    {
        return new Node(val);
    }

    Node *newNode = new Node(val);
    Node *temp = head;
    int len = 0;

    // calculating the length of LL
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    // calculating the position to insert the new node
    int mid;
    if (len % 2 == 0)
    {
        mid = len / 2;
    }
    else
        mid = (len + 1) / 2;

    temp = head;

    // Mode to position before where
    // the new node will be inserted
    while (mid > 1)
    {
        temp = temp->next;
        mid--;
    }

    // Insert the new node and adjust the LL
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

int main()
{

    Node *head = new Node(1);
    head->next = new Node(2);

    head->next->next = new Node(4);
    head->next->next->next = new Node(5);
    cout << "Before inserting the value: " << endl;
    traverse(head);

    cout << "After inserting the value: " << endl;
    insertatMiddle(head, 3);
    traverse(head);
    return 0;
}