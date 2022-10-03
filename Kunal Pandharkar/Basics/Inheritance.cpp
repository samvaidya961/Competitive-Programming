#include <iostream>
using namespace std;

class Output
{
public:
    void printValues(const string &s, int x)
    {
        cout << "Teacher = " << s << " Roll = " << x << endl;
    }
};

class TY02
{
protected:
    string teacher;

public:
    TY02(const string &s) : teacher(s) { cout << "Teacher Constructor Called" << endl; }
    void PrintTeaher() { cout << "Teacher = " << teacher << endl; }
    ~TY02() {cout << "Teacher Destructor Called"<< endl;}
};

class Student : public TY02 , public Output
{
    int roll;

public:
    Student(int x, const string &s) : roll(x), TY02(s) { cout << "Student Constructor called" << endl; }
    ~Student() {cout << "Student Destructor Called"<< endl;}
    int getRoll() {return roll;}
    string getTeacher() {return teacher;}
};



int main(){
    Student s1(100,"Asma mam");
    s1.printValues(s1.getTeacher(),s1.getRoll());
}