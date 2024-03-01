// Problem statement
// Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Increasing Letter Triangle.

// Example:
// Input: ‘N’ = 3

// Output:

// A
// A B
// A B C

#include <iostream>
using namespace std;

void nLetterTriangle(int n)
{
    char character = 'A';
    int column = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= column)
            {
                cout << character << " ";
                character = (char)(character + 1);
            }
        }
        column++;
        character = 'A';
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    nLetterTriangle(n);
    return 0;
}
