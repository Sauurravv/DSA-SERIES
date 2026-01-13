# Reversing a Singly Linked List (Using Stack)

## Problem

I wanted to **print the values of a singly linked list in reverse order** without modifying the original list.  
Since a singly linked list only points forward, moving backward directly isn’t possible.

---

## My Approach

1. **Understanding the constraints**

   - Each node has a `value` and a `next` pointer.
   - There’s **no previous pointer**, so moving backward directly is impossible.

2. **Thinking of solutions**

   - I realized a **stack** works in LIFO (last-in, first-out) order.
   - If I push all node values onto a stack while traversing forward, popping them would naturally give the reversed order.

3. **Implementation steps**

   - Traverse the list from `head` to `NULL`.
   - Push each node’s `value` onto a stack.
   - After traversal, pop values from the stack and print them — this prints the list in reverse.

4. **Complexity analysis**
   - **Time complexity:** O(n), since every node is visited once.
   - **Space complexity:** O(n), due to storing all values in a stack.
   - The original linked list remains unchanged.

---

## My Story / How I Solved It

At first, I tried to see if I could **walk backward using a `prev` pointer**.  
I realized that in a singly linked list, a single `prev` variable only remembers **one step back**, not the whole path.

Then I thought about **recursion**, which could reverse the printing order, but I wanted something **iterative**.  
That’s when the idea of using a **stack** clicked.

I first pushed all node values onto the stack, but initially, I only printed the **top once**.  
I realized I needed to **pop all elements** to get the full reversed output.  
Once I added the second loop for popping, it worked perfectly.

It felt great to connect the **forward traversal** and **LIFO behavior** to achieve reverse printing without touching the original list!

---

## My Final Code

```cpp
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
```
