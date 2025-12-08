/*
---------------------------
** Array Operation **
1. Traversal - visit all element once
2. Insertion - insert element; at beginning, at end , at given index
3. Deletion - Delete element; at beginning, at end, at given index
4. Searching - specific value search
5. Sorting - ascending, decending
----------------------------
 */
#include <iostream>
using namespace std;

int main()
{
    int studentid[5] = {110, 115, 127, 132, 135};
    // array Traversing
    for (int i = 0; i < 5; i++)
        cout << "Index: " << i << ": " << studentid[i] << endl;
    cout << endl;
}