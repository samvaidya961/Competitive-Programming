#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int bitwiseComplement(int n)
{
    int ans;
    int temp = n;
    int mask = 0;

    if (n == 0)
    {
        return 1;
    }

    n = ~n;

    while (temp != 0)
    {
        mask = (mask << 1); //left shift
        mask = mask | 1;
        temp = temp >> 1; //right shift
    }
    ans = n & mask;

    return ans;
}

int main()
{
    int x;
    cin >> x;
    cout << bitwiseComplement(x);
}