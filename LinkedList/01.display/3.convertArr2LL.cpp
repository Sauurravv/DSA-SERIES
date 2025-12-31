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
        next = NULL;
    }
};

Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);

    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void traverse(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << "Null" << endl;
}
int main()
{
    vector<int> arr = {2, 5, 8, 7};
    Node *head = convertArr2LL(arr);
    cout << head->value;
    cout << endl;
    // this will traverse all the element however the above code will only print the array first element

    traverse(head);
}