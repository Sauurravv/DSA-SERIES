#include <bits/stdc++.h>
using namespace std;

int recursionFactorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * recursionFactorial(n - 1);
}
int main()
{
    int n = 5;
    cout << recursionFactorial(n) << endl;
    return 0;
}