// Problem statement
// Aryan and his friends are very fond of the pattern. For a given integer ‘N’, they want to make the Reverse N-Number Triangle.

// Example:
// Input: ‘N’ = 3

// Output:

// 1 2 3
// 1 2
// 1

#include <iostream>
using namespace std;

void nNumberTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << 1 << " ";
        for (int j = 2; j <= n - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    nNumberTriangle(n);
    return 0;
}