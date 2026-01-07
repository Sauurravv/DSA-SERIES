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

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    Node *head = convert2Array(arr);
    traverse(head);
    reverseTraverse(head);
}