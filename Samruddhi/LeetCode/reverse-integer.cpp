#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    int digit;
    int ans = 0;

    while (x != 0)
    {
        digit = x % 10;

        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            return 0;
        }
        ans = (ans * 10) + digit;
        x = x / 10;
    }
    return ans;
}


// int reverse(int x) {
//         string s=to_string(x);
//         std::reverse(s.begin(),s.end());
//         long long int ans=stoll(s);
        
//         if(s[s.length()-1]=='-'){
//             ans=ans*(-1);
//         }
        
//         if((ans > INT_MAX) || (ans < INT_MIN)){
//             return 0;
//         }
        
//         return ans;
        
//     }


int main()
{
    int x;
    cin >> x;
    cout << reverse(x);
}