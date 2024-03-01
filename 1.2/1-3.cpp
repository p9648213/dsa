// Problem statement
// Sam is making a Triangular painting for a maths project.

// An N-dimensional Triangle is represented by the lower triangle of the pattern filled with integers starting from 1.

// For every value of ‘N’, help sam to print the corresponding N-dimensional Triangle.

// Example:
// Input: ‘N’ = 3

// Output:
// 1
// 1 2
// 1 2 3

#include <iostream>
using namespace std;

void nTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << 1 << " ";
        for (int j = 2; j < i + 1; j++)
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
    nTriangle(n);
    return 0;
}