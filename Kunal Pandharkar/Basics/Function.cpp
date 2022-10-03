#include <iostream>
using namespace std;

// inline function
inline int add(int a, int b) { return a + b; }

// pass by value
void sub(int a, int b) { cout << a - b; }

// pass by reference
void increment(int &a) { a++; }

// function with default arguments
void subd(int a = 0, int b = 0, int c = 0) { cout << a - b - c << endl; }

// recursive function
void print(int x)
{
    if (x <= 10)
    {
        cout << x << " ";
        print(x + 1);
    }
}

// factorial
long int fac(long int x)
{
    if (x > 1)
        return (x * fac(x - 1));
}

// sum of n natural numbers
int sumn(int x)
{
    if (x >= 1)
        return x + sumn(x - 1);
}

// febonacci
int feb(int x)
{

    if (x <= 1)
        return x;
    else
        return feb(x - 1) + feb(x - 2);
}

// function overloading

int printInt(int x){
    cout << "Int is printed << ";
    return x;
}



char printInt(char c){
    cout << "Char is printed << ";
    return c;
}

int main()
{
    cout << add(10, 20) << endl;
    sub(20, 10);

    int c = 10;
    increment(c);
    cout << endl
         << c;
    subd(10, 20);
    subd(100, 10, 10);
    subd(10);

    print(1);

    cout << endl;

    cout << fac(9L) << endl;

    cout << sumn(10) << endl;

    cout << feb(9);
     
    int f=0,s=1;
    
    cout <<endl << f << " " << s << " ";
    for (int i = 1; i < 9; i++)
    {
        int ans = f + s;
        f = s;
        s = ans;
        cout << ans << " ";
    }

    cout << endl;

   cout <<  printInt(10);
    cout << endl;
    cout << printInt('A');
    
}