#include<iostream>
using namespace std;


template <class T1,typename T2>

T1 addition(T1 a, T2 b){
    return a+b;
}

int main(){

    cout << addition<int,int>(10,20);
    cout << endl;
    cout << addition(10.20,30.40);

}