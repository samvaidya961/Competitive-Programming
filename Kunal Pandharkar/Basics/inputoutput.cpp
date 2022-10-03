#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    cout << x << endl;

    string str;

    
    cin >> str;
    cout
        << str << endl;

    cin.ignore(256, '\n');
    getline(cin, str);
    cout << str << endl;

    stringstream(str) >> x;
    cout << endl
         << x << endl;
    cin >> x;

    stringstream(str) << x;
    cout << endl
         << str;
}