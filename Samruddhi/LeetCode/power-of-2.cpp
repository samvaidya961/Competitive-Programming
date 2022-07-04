#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    int i = 0;

    while (i <= 30)
    {
        if (pow(2, i) == n)
        {
            return true;
        }
        i++;
    }

    return false;
}

int main()
{
    int x;
    cin >> x;
    cout << isPowerOfTwo(x);
}