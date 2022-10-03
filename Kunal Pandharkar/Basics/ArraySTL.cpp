#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 10> arr;

    if (arr.empty())
        cout << "Array is empty";
    else
        cout << "Not Empty";

    cout << endl;

    arr.fill(10);

    for (int i = 0; i < arr.size(); i++)
        arr.at(i) = i + 1;

    // returns the same thing (number of elements that can be fit in array)
    cout << arr.size() << endl;
    cout << arr.max_size() << endl;

    for (int *it = arr.begin(); it != arr.end(); it++)

        cout << *it << " ";

    cout << endl;

    for (reverse_iterator<int *> it = arr.rbegin(); it != arr.rend(); it++)

        cout << *it << " ";

    cout << endl;

    cout << arr.front() << " " << arr.back();

    int *p = arr.data();

    cout << endl
         << p[8] << " " << *p + 8; // using offeset (same things)
}