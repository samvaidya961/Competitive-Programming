#include <iostream>
using namespace std;

class Student
{
    int roll;
    char grade;

public:
    string *name;
    Student() {}
    Student(int x, char c, const string &s) : roll(x), grade(c), name(new string(s)) {}

    // move constructor
    Student(const Student &&obj) : roll(obj.roll), grade(obj.grade), name(obj.name) {}

    // move asisgnment-
    void operator=(Student &&obj)
    {
        delete name;
        roll = obj.roll;
        grade = obj.grade;
        name = obj.name;
        obj.name = nullptr;
    }
    Student operator+(const Student &obj)
    {
        return Student(this->roll + obj.roll, 'C', *(this->name) + *(obj.name));
    }
    void Print();
};

void Student ::Print()
{
    cout << roll << " " << grade << " " << *name << endl;
}

int main()
{
    Student s1(10, 'A', "Kunal");
    Student s2 = Student(20, 'B', "Move Student");
    Student s3;
    s1.Print();
    s2.Print();
    s1 = s1 + s2;
    s1.Print();
}