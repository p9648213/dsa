// Problem statement
// Ninja has been given a task to print the required pattern and he asked for your help with the same.

// You must print a matrix corresponding to the given number pattern.

// Example:
// Input: ‘N’ = 4

// Output:

// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

#include <iostream>
using namespace std;

void getNumberPattern(int n)
{
    int max_row = n * 2 - 1;
    for (int i = 0; i < max_row; i++)
    {
        for (int j = 0; j < max_row; j++)
        {
                }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    getNumberPattern(n);
    return 0;
}