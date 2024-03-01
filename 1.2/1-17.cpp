// Problem statement
// Sam is curious about Alpha-Hills, so he decided to create Alpha-Hills of different sizes.

// An Alpha-hill is represented by a triangle, where alphabets are filled in palindromic order.

// For every value of ‘N’, help sam to return the corresponding Alpha-Hill.

// Example:
// Input: ‘N’ = 3

// Output:
//     A
//   A B A
// A B C B A

#include <iostream>
using namespace std;

void alphaHill(int n)
{
    int max_row = n * 2 - 1;
    int column = 1;
    int center = max_row / 2;
    char ch = 'A';

    for (int i = 0; i < n; i++)
    {
        char left_char = (char)(ch - i);
        char right_char = (char)(ch - 1);
        for (int j = 0; j < max_row; j++)
        {
            if (j >= center - i && j <= center + i)
            {
                if (j == center)
                {
                    cout << ch << " ";
                }
                else if (j < center)
                {
                    cout << left_char << " ";
                    left_char = (char)(left_char + 1);
                }
                else
                {
                    cout << right_char << " ";
                    right_char = (char)(right_char - 1);
                }
            }
            else
            {
                cout << "  ";
            }
        }
        column += 2;
        ch = (char)(ch + 1);
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    alphaHill(n);
    return 0;
}