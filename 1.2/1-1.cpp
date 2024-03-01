// Problem statement
// Sam is making a forest visualizer. An N-dimensional forest is represented by the pattern of size NxN filled with ‘*’.

// For every value of ‘N’, help sam to print the corresponding N-dimensional forest.

// Example:
// Input: ‘N’ = 3

// Output:
// * * *
// * * *
// * * *

#include <iostream>
using namespace std;

void nForest(int n)
{
    string s = "";
    // Write your code here.
    for (int i = 0; i < n; i++)
    {
        s = s + "* ";

        for (int j = 0; j < n - 1; j++)
        {
            s = s + "* ";
        }

        s = s + "\n";
    }

    cout << s;
}

int main()
{
    int n;
    cin >> n;

    nForest(n);

    return 0;
}