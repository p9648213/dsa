// Problem statement
// Sam is researching on Alpha-Triangles. So, he needs to create them for different integers ‘N’.

// An Alpha-Triangle is represented by the triangular pattern of alphabets in reverse order.

// For every value of ‘N’, help sam to print the corresponding Alpha-Triangle.

// Example:
// Input: ‘N’ = 3

// Output:
// C
// C B
// C B A

#include <iostream>
using namespace std;

void alphaTriangle(int n)
{
    int column = 1;
    for (int i = 0; i < n; i++)
    {
        char ch = (char)('A' + n - 1);
        for (int j = 1; j <= column; j++)
        {
            cout << ch << " ";
            ch = (char)(ch - 1);
        }
        column++;
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    alphaTriangle(n);
    return 0;
}