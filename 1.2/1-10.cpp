// Problem statement
// Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Rotated Triangle.

// Example:
// Input: ‘N’ = 3

// Output:

// *
// **
// ***
// **
// *

#include <iostream>
using namespace std;

void nStarTriangle(int n)
{
    string s = "";
    int maxStar = n;
    int maxRow = n * 2 - 1;
    int limit = 1;
    bool reverse = false;
    for (int i = 0; i < maxRow; i++)
    {
        for (int j = 1; j <= maxStar; j++)
        {
            if (j <= limit)
            {
                s = s + "*";
            }
        }
        if (limit < maxStar && reverse == false)
        {
            limit++;
        }
        if (reverse == true)
        {
            limit--;
        }
        if (limit >= maxStar)
        {
            reverse = true;
        }
        s = s + "\n";
    }
    cout << s;
}

int main()
{
    int n;
    cin >> n;
    nStarTriangle(n);
    return 0;
}