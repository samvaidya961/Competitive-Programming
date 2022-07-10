#include <iostream>
#include <bits/stdc++.h>
using namespace std;

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    // Write your code here
    int s = 0;
    int e = n - 1;
    int m = s + (e - s) / 2;
    int f = -1, l = -1;
    while (s <= e)
    {
        if (k == arr[m])
        {
            f = m;
            e = m - 1;
        }
        else if (k > arr[m])
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
        m = s + (e - s) / 2;
    }

    s = 0;
    e = n - 1;
    m = s + (e - s) / 2;

    while (s <= e)
    {
        if (k == arr[m])
        {
            l = m;
            s = m + 1;
        }
        else if (k > arr[m])
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
        m = s + (e - s) / 2;
    }

    cout << "first position : " << f << endl;
    cout << "last position : " << l << endl;
    // return {f, l};
}
int main()
{
    vector<int> arr;
    arr = {2, 3, 6, 6, 6};
    firstAndLastPosition(arr, 5, 7);
    return 0;
}