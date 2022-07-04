#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
    int d;
    long int ans = 0;
    int op = x;
    while (x != 0)
    {
        d = x % 10;
        ans = (ans * 10) + d;
        x = x / 10;
    }
    if (ans < 0)
    {
        return false;
    }

    if (ans == op)
    {
        return true;
    }

    return false;
}

// bool isPalindrome(int x) {
//    string s=to_string(x);
//     reverse(s.begin(),s.end());
//     if(stol(s)==x){
//         return true;
//     }
//     return false;
// }

int main()
{
    int x;
    cin >> x;
    cout << isPalindrome(x);
}