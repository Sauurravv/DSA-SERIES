#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Stack
{
    vector<int> stackArray;

public:
    void push(int val)
    {
        stackArray.push_back(val);
    }

    void pop()
    {
        stackArray.pop_back();
    }
    int top()
    {
        return stackArray[stackArray.size() - 1];
    }
    bool empty()
    {
        return stackArray.size() == 0;
    }
};
int main()
{
    Stack stackArray;
    stackArray.push(5);
    stackArray.push(4);
    stackArray.push(3);

    return 0;
}