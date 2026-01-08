#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;

public:
    Node(int val, Node *next1, Node *prev1)
    {
        value = val;
        next = next1;
        prev = prev1;
    }
    Node(int val)
    {
        value = val;
        next = NULL;
        prev = NULL;
    }
};

Node *convert2Array(vector<int> &arr)
{
    if (arr.size() == 0)
        return nullptr;
    Node *head = new Node(arr[0]);
    Node *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *newNode = new Node(arr[i]);
        temp->next = newNode;
        newNode->prev = temp;
        temp = newNode;
    }
    return head;
}

void traverse(Node *head)
{

    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reverseTraverse(Node *head)
{
    if (head == nullptr)
        return;
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != nullptr)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insertAtMiddle(Node *head, int val)
{
    Node *newNode = new Node(val);

    // Empty list
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    int len = 0;
    Node *temp = head;
    // calculating the length
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    int mid = 0;
    if (len % 2 == 0)
    {
        mid = len / 2;
    }
    else
    {
        mid = (len + 1) / 2;
    }
    temp = head;
    while (mid > 1)
    {
        temp = temp->next;
        mid--;
    }
    newNode->next = temp->next;
    newNode->prev = temp;

    if (newNode->next != NULL)
        newNode->next->prev = newNode;

    temp->next = newNode;
}

int main()
{
    vector<int> arr = {1, 2, 4, 5};
    Node *head = convert2Array(arr);
    // cout << "\n---------------------------- \n\n";
    traverse(head);
    reverseTraverse(head);
    // cout << "\n---------------------------- \n\n";
    insertAtMiddle(head, 3);
    traverse(head);
    reverseTraverse(head);
    // cout << "\n---------------------------- \n\n";
}