#include<iostream>
using namespace std;

class Student{
    int roll;
    public:
    string name;
    Student() : roll(0) {};
    Student(int x);
    Student(int x, string s) : roll(x),name(s) {};
    void Print(int x){
        cout <<x << ".Roll = "<<roll<<" Name = " << name << endl;
    }
};

Student::Student(int x) : roll(x) {};

int main(){
   Student s1(10);
   s1.Print(1);
   Student s2{20,"Kunal"};
   s2.Print(2);
   Student s3 = {20,"Kunal Pandharkar"};
   s3.Print(3);
   Student *s;
   s = &s3;
   s->Print(3);
   s->name = "Samruddhi Vaidya";
   s3.Print(3);
   s = new Student[2];
   s[0].name = "suyog";
   s[0].Print(4);
   s[1].name = "Zain";
   (s + 1)->Print(5);
   (s+1)->name = "Deepa";
   s[1].Print(6);
}