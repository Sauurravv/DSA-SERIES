#include <iostream>
using namespace std;

int main()
{
    int n;
    int array[10], searching, i;
    cout << "Enter the size of an array: ";
    cin >> n;

    cout << "Enter the array element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << endl;

    cout << "Enter a number to search in array: ";
    cin >> searching;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == searching)
        {
            cout << "Element found at index: " << i;
            break;
        }
    }
    if (i == n)
    {
        cout << "Element not found in array";
    }
}