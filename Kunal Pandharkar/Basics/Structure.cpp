#include<iostream>
using namespace std;


struct Student{
   int roll;
   string name;
   void callme(){
      cout << "called";
   }
}s1;

struct TY02{
    string teacher;
    Student sm;
   
};

int main(){
   TY02 rt {"kunal",2120,"samruddhi"}; // uniform initilization
   cout << rt.teacher << endl << rt.sm.roll << endl << rt.sm.name << endl;
   s1.callme();
   s1.roll = 20;
   s1.name = "Kunal Pandharkar";
   Student s2;
   s2.roll = 32;
   s2.name = "Suyog Kulkarni";
   cout << s1.roll << ' ' << s2.name << endl;
   cout << s1.roll << ' ' << s1.name << endl;
   Student s[3];
   s[0].roll = 1;
   s[0].name = "XYZ1";
   cout << s[0].roll << ' ' << s[0].name << endl;
   

   for (int i = 1; i <= 2; i++)
   {
      s[i].roll = i+1;
      s[i].name = "XYZ" + to_string(i + 1);
   }

   cout << (s+1)->roll << ' ' << (s+1)->name << endl;

   for (int i = 1; i <= 2; i++)
     cout << s[i].roll << ' ' << s[i].name << endl;

    Student *sp;

    sp = &s1;

    cout << sp->roll << ' ' << sp->name << endl;
    cout << (*sp).roll << ' ' << (*sp).name <<  endl;


    sp->roll = 2009;
    sp->name = "Kunal Pandharkar Changed";

    cout << s1.roll << ' ' << s1.name << endl;

    TY02 t1,t2;

    t1.sm.roll = 20;
    t2.sm.roll = 30;

    cout << t1.sm.roll << ' ' << t2.sm.roll;


   
   
}


