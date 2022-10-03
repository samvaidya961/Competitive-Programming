#include <iostream>
#include <string>

using namespace std;

int main()
{

    // integers
    int a = 10;
    long int b = 20;
    long long int c = 30;

    // signed and unsigned int
    signed int d = -10;
    unsigned int e = 0;

    // single character
    char kl = 'A';

    // string class
    string str1 = R"(Hello World)";
    string str2("Hello World2");
    string str3{"Hello World3"};
    string str4 = "this"
                  "follows"
                  "single"
                  "string"; // op = thisfollowssinglestring
    string str5 = " this string is on \
    new line";

    cout << str1;

    // boolean type
    bool T = true, F = false;

    // floating point numbers
    float f = 1.23;
    double de = 3.90;
    long double ld = 9989.90;

    // different initilization methods
    int x1 = 0; // normal from c
    int x2(0);  // constructor initilization
    int x3{0};  // uniform initilization

    // constant
    const int cs = 10;

    int x, y;

    x = y = 10;

    x = x + (y = 60);

    cout << endl
         << x;
}