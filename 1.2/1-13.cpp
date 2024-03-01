// Problem statement
// Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Increasing Number Triangle.

// Example:
// Input: ‘N’ = 3

// Output:

// 1
// 2 3
// 4 5 6

#include <iostream>
using namespace std;

void nNumberTriangle(int n)
{
    int count = 1;
    int column = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= column)
            {
                cout << count << " ";
                count++;
            }
        }
        column++;
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