/*
-----------------------------
Insertion

------------------------------
*/

#include <iostream>
using namespace std;
int main()
{
    int studentId[10];
    int n, pos, insertedid;
    cout << "Enter the number of student: ";
    cin >> n;
    cout << "Enter student's Id: ";
    for (int i = 0; i < n; i++)
    {
        cin >> studentId[i];
    }
    cout << "Enter the insertion location: ";
    cin >> pos;
    cout << "Enter the student id to insert: ";
    cin >> insertedid;

    // shifting right to the array element
    for (int i = n; i > pos; i--)
    {
        studentId[i] = studentId[n - 1];
    }
    // Inserted the new element;
    studentId[pos] = insertedid;
    n++;

    // displaying updated array
    for (int i = 0; i < n; i++)
    {
        cout << studentId[i] << " ";
    }
    return 0;
}
