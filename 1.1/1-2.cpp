// Problem statement
// Data type refers to the type of value a variable has and the way the computer interprets it.

// Each data type has a different size. You’ve studied 5 different data types and the sizes of the data types:

// Integer: 4 bytes
// Long: 8 bytes
// Float: 4 bytes
// Double: 8 bytes
// Character: 1 byte

// You’re given a data type. Print its size in bytes.

// Example :
// Input: Long

// Output: 8

// Explanation: The size of a Long variable is given as 8 bytes.

#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s == "Long" || s == "Double")
    {
        cout << 8;
    }
    else if (s == "Integer" || s == "Float")
    {
        cout << 4;
    }
    else if (s == "Character")
    {
        cout << 1;
    }

    return 0;
}