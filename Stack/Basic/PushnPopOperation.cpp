#include <iostream>
using namespace std;
int stk[5], top = -1, n = 5;
void pushElement(int val)
{
    if (top == n - 1)
    {
        cout << "Stack is full";
    }
    else
    {
        top++;
        stk[top] = val;
    }
}

void display()
{
    if (top >= 0)
    {
        for (auto i = top; i >= 0; i--)
        {
            cout << stk[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "No element found" << endl;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack is empty. " << endl;
    }
    else
    {
        cout << "The poped element is : " << stk[top] << endl;
        ;
        top--;
    }
}
int main()
{

    int stk[5];
    int top = -1;
    pushElement(1);
    pushElement(2);
    pushElement(3);
    pushElement(4);

    display();
    pop();
    pop();
    pop();
    return 0;
}