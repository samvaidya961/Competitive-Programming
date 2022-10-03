#include <iostream>
using namespace std;

int main()
{
    int *p;
    int size;
    cin >> size;
    p = new (nothrow) int[size];

    if (p == nullptr)
    {
        cout << "Memory not allocated !";
        return 0;
    }

    cout << endl
         << "Enter the " << size << " elements : " << endl;

    for (int i = 0; i < size; i++)
        cin >> p[i];

    for (int i = 0; i < size; i++)
        cout << p[i] << ' ';

    delete[] p;

    cout << endl;

    for (int i = 0; i < size; i++)
        cout << p[i] << ' ';
    
    int *arr = new int[5];
}