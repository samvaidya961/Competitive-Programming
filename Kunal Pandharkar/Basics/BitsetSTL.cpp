#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    bitset<3> b1;
    b1[0] = 1;
    b1[1] = 1;
    b1[2] = 1;

    cout << b1.test(1) << endl; // returns the value of bit - no use
    
    b1.reset(1);

    cout << (b1.any() ? "Yess" : "No") << endl;
    cout << (b1.none() ? "Yess" : "No") << endl;
    cout << (b1.all() ? "Yess" : "No") << endl;



    b1.flip(1);
    // b1.set(2,0);

    for (int i = 0; i < 3; i++)
    {
        cout << b1[i] << ' ';
    }

    // for(int i : b1) cout << i << ' ';

    cout << endl;

    int decimal = b1.to_ulong();

    string str = b1.to_string();

    for (int i = 0; i < str.length() / 2; i++)
    {
        char temp = str[i];
        str[i] = str[str.length() - i - 1];
        str[str.length() - i - 1] = temp;
    }

    cout << str << endl;

    cout << decimal << endl;
}