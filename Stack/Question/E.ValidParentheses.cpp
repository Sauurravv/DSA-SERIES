/*You are given a string s consisting of the following characters: '(', ')', '{', '}', '[' and ']'.

The input string s is valid if and only if:
1.Every open bracket is closed by the same type of close bracket.
2.Open brackets are closed in the correct order.
3.Every close bracket has a corresponding open bracket of the same type.

Return true if s is a valid string, and false otherwise.
--------------------
Example 1:
Input: s = "[]"
Output: true
---------------------
Example 2:
Input: s = "([{}])"
Output: true
---------------------
Example 3:
Input: s = "[(])"
Output: false
---------------------
*/

#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isValid(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
                return false;
            char t = st.top();
            st.pop();
            if ((c == ')' && t != '(') ||
                (c == '}' && t != '{') ||
                (c == ']' && t != '['))
            {
                return false;
            }
        }
    }
    return st.empty();
}

int main()
{
    // read one line (e.g. [] or ([{}]) or [(]) )
    string s;
    if (!getline(cin, s))
        return 0;
    cout << boolalpha << isValid(s) << endl;
    return 0;
}