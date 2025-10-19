#include <iostream>
#include <stack>
using namespace std;

class MinStack
{
public:
    stack<int> st;
    stack<int> minst;
    MinStack()
    {
    }

    void push(int val)
    {
        st.push(val);

        if (minst.empty() || val <= minst.top())
        {
            minst.push(val);
        }
    }

    void pop()
    {
        if (!st.empty())
        {
            if (st.top() == minst.top())
            {
                minst.pop();
            }
            st.pop();
        }
    }

    int top()
    {
        return st.top();
    }

    int getMin()
    {
        if (!minst.empty())
        {
            return minst.top();
        }
        return -1; // or throw an exception
    }
};

int main()
{
    MinStack s;
    s.push(-2);
    s.push(0);
    s.push(-3);

    cout << s.getMin() << endl; // should print -3
    s.pop();
    cout << s.top() << endl;    // should print 0
    cout << s.getMin() << endl; // should print -2

    return 0;
}