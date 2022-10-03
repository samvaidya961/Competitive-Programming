#include <iostream>
using namespace std;

int main()
{
    int a = 12, b = 30;

    if (a == b && cout << "similar")
        ;

    if (a > b && cout << "a is greater")
        ;

    if (a < b && cout << "b is greater")
        ;

    cout << endl;

    switch (a)
    {
    case 1:
        cout << "a is 1";
        break;

    case 12:
        cout << "a is 12";
        break;

    default:
        cout << "a is nothing";
    }

    cout << endl;
    a = 0;

    mylabel:
    cout << ++a << " ";

    if(a < 10)
     goto mylabel;

    

}