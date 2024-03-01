// Problem statement
// Sam is curious about symmetric patterns, so he decided to create one.

// For every value of ‘N’, return the symmetry as shown in the example.

// Example:
// Input: ‘N’ = 3

// Output:
// *         *
// * *     * *
// * * * * * *
// * *     * *
// *         *

#include <iostream>
using namespace std;

void symmetry(int n)
{
    int max_rows = n * 2;
    int left = 0;
    int right = max_rows - 1;
    for (int i = 0; i < max_rows; i++)
    {
        for (int j = 0; j < max_rows; j++)
        {
            if (j > left && j < right)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        if (i > n - 2)
        {
            left--;
            right++;
        }
        else
        {
            left++;
            right--;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    symmetry(n);
    return 0;
}