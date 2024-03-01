// Problem statement
// Aryan and his friends are very fond of the pattern. They want to make the Reverse N-Number Crown for a given integer' N'.

// Given 'N', print the corresponding pattern.

// Example:
// Input: ‘N’ = 3

// Output:

// 1         1
// 1 2     2 1
// 1 2 3 3 2 1

#include <iostream>
using namespace std;

void numberCrown(int n)
{
    string s = "";
    int maxColumn = n * 2;
    int left = 1;
    int right = maxColumn;

    for (int i = 0; i < n; i++)
    {
        int leftCount = 1;
        int rightCount = maxColumn;
        for (int j = 1; j <= maxColumn; j++)
        {
            if (j <= left)
            {
                s = s + to_string(leftCount) + " ";
                leftCount++;
            }
            else if (j >= right)
            {
                s = s + " " + to_string(rightCount);
            }
            else
            {
                s = s + "  ";
            }
            rightCount -= 1;
        }

        left += 1;
        right -= 1;
        s = s + "\n";
    }
    cout << s;
}

int main()
{
    int n;
    cin >> n;
    numberCrown(n);
    return 0;
}