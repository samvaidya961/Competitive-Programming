#include <iostream>
using namespace std;

#define compare(a, b) ((a == b) ? "true" : "false")

int main()
{
    // assignment operator
    int a = 10;
    int x, y;
    x = y = 10;
    // arithmetic operator
    x = (x = 10) + (y = 10);
    x = (x = 10) - (y = 10);
    x = (x = 10) * (y = 10);
    x = (x = 10) / (y = 10);
    x = 14, y = 2;
    int rem = x % y;
    cout << rem << endl;
    // executes from left to right so x = x + 3
    x = x + 10, x + 3;

    x = y = 20;

    // ternay
    cout << ((x == y) ? "Similar" : "Different") << endl;
    cout << compare(x, y) << endl;

    x = y = 10;

    if (x == y && cout << "similar")
        ;
    x = 11;

    if (x > y && cout << "X is Greater")
        ;
    if (x < y && cout << "Y is Greater")
        ;

    x = 0;

    cout << endl
         << !x;

    double d;

    d = (double)5 / 2;

    cout << endl
         << "division = " << d << endl;

    for (int i = 0;;)
    {
        if (i < 5 && ++i)
        {
            cout << i << " ";
        }
        else
        {
            break;
        }
    }
}