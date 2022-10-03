#include <iostream>
using namespace std;

int main()
{
    // Bitwise Operators

    // AND (&)
    int a = 5, b = 3; // 101 011
    cout << (a & b) << endl;

    // OR (|)
    cout << (a | b) << endl;

    // Xor (^) // 001 010 = 011
    cout <<"Xor =" <<  (2 ^ 2) << endl;

    // Not (~) // 101 - 010
    bool t = true;
    cout << ~t << endl;

    a = 6;

    // Right Shift (>>) a = 110 = 001 
    cout <<"right Shift = " << (a >> 2) << endl;

    // Left Shift (<<) 110 000

    a = 10; // 1010 --  10 * 2 * 2 * 2
    cout << "LEft Shift = " <<  (a << 3);
}