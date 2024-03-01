// Problem statement
// Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately.

// Digits mean numbers, not places! That is, if the given integer is "132456", even digits are 2, 4, and 6, and odd digits are 1, 3, and 5.

// Constraints
// 0<= 'n' <=10000

// Example :
// Input: 'n' = 132456

// Output: 12 9

// Explanation:
// The sum of even digits = 2 + 4 + 6 = 12
// The sum of odd digits = 1 + 3 + 5 = 9
// Constraints
// 0<= 'n' <=10000

// Example :
// Input: 'n' = 132456

// Output: 12 9

// Explanation:
// The sum of even digits = 2 + 4 + 6 = 12
// The sum of odd digits = 1 + 3 + 5 = 9
// Input format :
//  The first line contains an integer 'n'.
// Output format :
// In a single line, print two space-separated integers, first the sum of even digits and then the sum of odd digits.

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum_odd = 0;
    int sum_even = 0;

    cin >> n;
    string s = to_string(n);

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] % 2 == 0)
        {
            sum_even = sum_even + (s[i] - '0');
        }
        if (s[i] % 2 != 0)
        {
            sum_odd = sum_odd + (s[i] - '0');
        }
    }

    cout << sum_even << " " << sum_odd;

    return 0;
}