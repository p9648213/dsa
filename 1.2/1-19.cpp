// Problem statement
// Sam is curious about symmetric patterns, so he decided to create one.

// For every value of ‘N’, return the symmetry as shown in the example.

// Example:
// Input: ‘N’ = 3

// Output:
// * * * * * *
// * *     * *
// *         *
// *         *
// * *     * *
// * * * * * *

#include <iostream>
using namespace std;

void symmetry(int n)
{
    int rows = n * 2;
    int left = n - 1;
    int right = n - 1;
    bool reverse = false;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (i == 0 || i == rows - 1)
            {
                cout << "* ";
            }
            else
            {
                if (j > left && j <= right)
                {
                    cout << "  ";
                }
                else
                {

                    cout << "* ";
                }
            }
        }
        if (i < n - 1)
        {
            left -= 1;
            right += 1;
        }
        else if (i > n - 1)
        {
            left += 1;
            right -= 1;
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
