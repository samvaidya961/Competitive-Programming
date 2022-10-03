#include<iostream>
using namespace std;

typedef int number; 
using C = char;;

int main(){
    union kp{
        number roll;
        C c[2] = {'A','K'};
    };

    kp s;
    s.roll = 10;

    cout << s.roll << ' ' << *(s.c) << *(s.c+1);

    enum colors{
        black=10,
        green
    };

    colors clr;

    clr = black;

    cout << (clr = green)  << ' ' << (clr = black);

    enum class cl{
        r = 10,b,g
    };




    
}