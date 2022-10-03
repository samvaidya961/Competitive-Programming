#include<iostream>
using namespace std;

class Student{
    int roll;
    string grade;
    public:
    string *name;
    Student() = default;
    Student(int x,const string& g,const string& s) : roll(x),name(new string(s)),grade(g) {}
    //copy constructur

    //shallow
    //Student(const Student& obj) : roll(obj.roll),grade(obj.grade),name(obj.name) {}
    
    //deep
    Student(const Student& obj) : roll(obj.roll),grade(obj.grade),name(new string(*obj.name)) {}

    //copy assignment
    //deep
    Student& operator=(const Student& obj1){
        roll = obj1.roll;
        grade = obj1.grade;
        name = new string(*obj1.name);
        return *this;
    }
    void Print();
};

void Student :: Print(){
    cout << "roll - " << roll << " grade - " <<grade << " name - " << *name << endl;
}

int main(){
   Student s1(10,"A","Kunal");
   // calling copy constructor (shallow copy)
   Student s2;
   s2 = s1;
   s1.Print();
   s2.Print();
   *s1.name = "Samruddhi";
   s1.Print();
   s2.Print();
}