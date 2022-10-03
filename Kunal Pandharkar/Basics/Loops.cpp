#include <iostream>
using namespace std;

int main()
{
    int n = 0;

    while (n < 10)
        cout << ++n << " ";

    n = 0;

    cout << endl;

    do
        cout << ++n << " ";
    while (n < 10);

    cout << endl;
    for (int i = 1; i <= n; i++)
        cout << i << " ";

    cout << endl;

    for (int i = 1, n = 21; i != n; i++, n--)
    {
        cout << i << " ";
    }

    cout << endl;

    for (char c : "Kunal")
    {
        cout << c << " ";
    }

    cout << endl;

    int arr[8] = {1, 2, 3, 4, 5, 6, 7};

    arr[7] = 20;

    for (int c : arr)
    {
        cout << c << " ";
    }
}