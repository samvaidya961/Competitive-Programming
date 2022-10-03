#include<iostream>
using namespace std;

class Marks;

class Student{
   int roll;
   public:
   Student(int x) : roll(x) {}
   friend void print(const Student&);
   void getMarks(const Marks&);
};


class Marks{
    friend class Student;
    int m[2];
    public:
    Marks(int x,int y) {
        m[0] = x;
        m[1] = y;
    }
};

void Student ::getMarks(const Marks& m1){
   cout << m1.m[0] << " " << m1.m[1] << endl;
}




void print(const Student& obj1){
    cout << "Roll = " << obj1.roll << endl;
}

int main(){
    Student s1(100);
    print(s1);
    Marks m1(10,20);
    s1.getMarks(m1);
}