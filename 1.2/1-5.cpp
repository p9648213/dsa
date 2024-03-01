// Problem statement
// Sam is planting trees on the upper half region (separated by the left diagonal) of the square shared field.

// For every value of ‘N’, print the field if the trees are represented by ‘*’.

// Example:
// Input: ‘N’ = 3

// Output:
// * * *
// * *
// *

#include <iostream>
using namespace std;

void seeding(int n)
{
    string s = "";
    for (int i = n; i > 0; i--)
    {
        s = s + "* ";
        for (int j = i + 1; j > 2; j--)
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
    seeding(n);
    return 0;
}