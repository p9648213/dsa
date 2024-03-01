// Problem statement
// Aryan and his friends are very fond of the pattern. For a given integer ‘N’, they want to make the N-Binary Number Triangle.

// You are required to print the pattern as shown in the examples below.

// Example:
// Input: ‘N’ = 3

// Output:

// 1
// 0 1
// 1 0 1

#include <iostream>
using namespace std;

void nBinaryTriangle(int n)
{
    int column = 0;
    for (int i = 0; i < n; i++)
    {
        bool isXeven;
        if (i % 2 == 0)
        {
            isXeven = true;
            cout << "1 ";
        }
        else
        {
            isXeven = false;
            cout << "0 ";
        }
        for (int j = 0; j < column; j++)
        {
            if (isXeven == false)
            {
                if (j % 2 == 0)
                {
                    cout << "1 ";
                }
                else
                {
                    cout << "0 ";
                }
            }
            else
            {
                if (j % 2 == 0)
                {
                    cout << "0 ";
                }
                else
                {
                    cout << "1 ";
                }
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
    nBinaryTriangle(n);
    return 0;
}