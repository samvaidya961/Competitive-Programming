#include <iostream>
using namespace std;

int main()
{
    // OPerator precedence

    int a = 10, b = 5;

    int c = a + 8 / 4 * b % 2;

    a = 10, b = 20;

    c = b++ + a--;

    cout << c;

    // * / % has higher precedence than the + -
    // flow of execution is left to right
    // L------->R

}