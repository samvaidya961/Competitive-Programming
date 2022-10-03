#include<iostream>
using namespace std;

namespace kp{
    int a = 10;
}

namespace sv{
    int a = 40;
}

int main(){
   cout  << kp::a << endl;
   cout  << sv::a << endl;
}