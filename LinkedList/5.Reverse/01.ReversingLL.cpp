#include <bits/stdc++.h>
#include <stack>
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
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
void ReverseNode(Node *head)
{
    stack<int> s;
    Node *temp = head;

    while (temp != NULL)
    {
        s.push(temp->value);
        temp = temp->next;
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}
int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    cout << "Before reversing Linked List: " << endl;
    traverse(head);
    cout << "After reversing Linked List: " << endl;
    ReverseNode(head);
    return 0;
}