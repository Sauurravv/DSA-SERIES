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

Node *top = NULL;

void push(int x)
{
    Node *newNode = new Node(x);
    newNode->next = top;
    top = newNode;
};
void pop()
{
    if (top == NULL)
    {
        cout << "Stack is empty. " << endl;
    }

    Node *temp = top;
    cout << "The popped element is : " << top->value << endl;
    top = top->next;
    delete temp;
}
void display()
{
    if (top == NULL)
    {
        cout << "Stack is empty." << endl;
    }
    Node *temp = top;
    while (temp != NULL)
    {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULL";
    cout << endl;
}
int main()
{
    push(5);
    push(4);
    push(3);
    display();
    cout << endl;
    pop();
    display();
    return 0;
}
