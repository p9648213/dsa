// Problem statement
// Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Diamond.

// Example:
// Input: ‘N’ = 3

// Output:

//   *
//  ***
// *****
// *****
//  ***
//   *

#include <iostream>
using namespace std;

void nStarTriangleTop(int n)
{
    int max = n * 2 - 1;
    int center = max / 2;
    int left = center - 1;
    int right = center + 1;
    string s = "";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= max - 1; j++)
        {
            if (j > left && j < right)
            {
                s = s + "*";
            }
            else
            {
                s = s + "-";
            }
        }
        left = left - 1;
        right = right + 1;
        s = s + "\n";
    }
    cout << s;
}

void nStarTriangleDown(int n)
{
    int max = n * 2 - 1;
    int center = max / 2;
    int left = -1;
    int right = max;
    string s = "";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= max - 1; j++)
        {
            if (j > left && j < right)
            {
                s = s + "*";
            }
            else
            {
                s = s + "-";
            }
        }
        left = left + 1;
        right = right - 1;
        s = s + "\n";
    }
    cout << s;
}

void nStarDiamond(int n)
{
    nStarTriangleTop(n);
    nStarTriangleDown(n);
}

int main()
{
    int n;
    cin >> n;
    nStarDiamond(n);
    return 0;
}