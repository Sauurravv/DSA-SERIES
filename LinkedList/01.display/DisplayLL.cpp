#include <iostream>
#include <list>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

// void traverse(Node *head)
// {
//     Node *temp = head;

//     while (!temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << "Null" << endl;
// }

int main()
{
    vector<int> arr = {2, 5, 6, 7};
    Node *y = new Node(arr[0]);
    // cout << y.data;
    cout << y->data;

    return 0;
}