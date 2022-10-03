#include<iostream>
using namespace std;

class Student{
   int roll;
   public:
   Student(int x) : roll(x) {}
   ~Student() {cout << "object destroyed" << endl;}
};

int main(){
    Student s1(10);
    Student s2(10);
    Student s3(10);
    cout << "called" << endl;
}