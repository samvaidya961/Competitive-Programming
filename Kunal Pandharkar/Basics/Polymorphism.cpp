#include<iostream>
using namespace std;

// run-time polymorphism - Method Overriding (Virtual Functions)
// compile time polymorphism - Method Overloading (Operator Overloading) 

//abstract class
class Var{
    protected:
    int a,b;
    Var(int x, int y) : a{x},b{y} {}
    public:
    void setValues(int x, int y){
        a = x ,b = y;
    }
    // pure virtual function - Runtime polymorphism
    virtual void operation() = 0;
    ~Var() {cout << "Var Object Deleted" << endl;}
};

class Add : public Var{
    public:
    Add(int x, int y) : Var(x,y) {}
    void operation(){
        cout << "Addition = " << a+b << endl;
    }
    ~Add() {cout << "Add Object Deleted" << endl;}

};

class Sub : public Var{
    public:
    Sub(int x,int y): Var(x,y) {}
    void operation(){
        cout << "Substraction = " << a - b << endl;
    }
    ~Sub() {cout << "Sub Object Deleted" << endl;}

};


int main(){
    // dynamic pointers 
    Var *v1 = new Add(10,20);
    Var *v2 = new Sub(20,10);


    v1->setValues(10,20);
    v2->setValues(20,10);
    
    
    v1->operation();
    v2->operation();

    delete v1;
    delete v2;

}