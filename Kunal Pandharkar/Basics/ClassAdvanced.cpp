#include <iostream>
using namespace std;

template <class T>
class Example{
    T var;
    public:
    Example(T x) : var(x) {};
    void increment() {cout << ++var << endl;}
};

template <>
class Example<char>{
    char var;
    public:
    Example(char x) : var(x) {};
    void uppercase() {cout << char(toupper(var)) << endl;}
};


class student
{
    int roll;

public:
    // static variables
    static int cnt;
    student() { cnt++; };
    student(int x) : roll{x} {};
    // operator overloading
    void operator+(const student &);
    void timepass() { cout << "timepass" << endl; }
    void print()
    {
        cout << roll << endl;
        timepass();
    }
    // const function
    void print() const { cout << "const called = " << roll << endl; }
    static void printcnt() { cout << cnt << endl; }
};

void operator!=(student &s1, student &s2)
{
    cout << "Non member operator called !";
}

int student::cnt = 0;

void student::operator+(const student &s1)
{
    cout << this->roll + s1.roll << endl;
}

int main()
{
    student s1{10};
    student s2{20};
    // const object
    const student s3{100};
    s1.print();
    s3.print();
    s1 + s2;          // calls the operator function
    s1.operator+(s2); // another way to call the operator function
    student k1, k2, k3, k4, k5;
    cout << student::cnt << " " << k5.cnt << endl;
    k1.printcnt();
    s1 != s2;
    student::printcnt();

    cout << "\n\n";

    Example<int> E(10);
    E.increment();
    Example<double> E1(20.30);
    E1.increment();
    Example<char> Ec('i');
    Ec.uppercase();
}
