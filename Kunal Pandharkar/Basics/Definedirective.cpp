#include <iostream>
using namespace std;

#define great(a, b) (a > b) ? a : b
#define tab '\t'

int main()
{
    int a = great(5, 10);
    int b = great(100, 50);

    cout << a << tab << b;
}

  