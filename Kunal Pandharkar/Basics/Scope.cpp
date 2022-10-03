#include <iostream>
using namespace std;

int x;

namespace kp
{
    int m = 20;
}

int main()
{
    int z = 10;
    // int m = 30;

    
    {
      using namespace kp;
      cout << m << endl;
    }

    cout << x << " " << z << endl;
    {
        int x = 20;
        cout << x << " " << z << endl;
    }
    cout << x << " " << z << endl;
}