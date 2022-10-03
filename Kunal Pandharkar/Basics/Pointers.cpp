#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}

void operation(int a, int b, int (*functionName)(int,int)){
    cout << (*functionName)(a,b);
}

void increment(int *start,int *stop){
    int *current = start;
    while(current != stop &&  ++*current && ++current);      
}

void print(int *start,int *stop){
    int *current = start;
    while(current != stop && cout << *current++ << ' ');
    
}

int main()
{
    int x = 10, y = 20;
    
    // normal pointers
    int *p = &x;
    cout << *p << ' ' << (*p)++ << endl;

    int arr[5] = {1,2,3,4,5};
    
    //pointers and arrays
    p = arr;

    cout << *p << ' ' << *(p+1) << ' ' << *(arr+2) << endl;
    
    *p = 1234;

    cout << *arr << endl;

    p = arr + 3;

    cout << *--p << endl;
   
    //non-const pointer pointing const value
    const int c = 10;

    const int *pc;

    pc = &c;

    cout << *pc << endl;

    x = 50;
    //const pointer pointing non-const value
    int * const cc = &x;
    *cc = 500;
    cout << *cc << ' ' << x << endl;
    
    //const pointer pointing the const value
    const int * const cp = &c;
    
    // pointers and strings
    const char *cd = "kunal";

    x = 40;

    char ck = 'A';

    void *pk;

    pk = &x;

    p = (int*)pk;

    cout << *p << endl;
    
    pk = &ck;

    char *cke = (char *)pk;

    cout << cke << endl; 
    
    // null pointer
    p = nullptr;
    p = 0;
    p = NULL;
    
    //pointers to functions
    int (*substraction)(int,int) = sub;
    operation(10,20,add);
    operation(20,10,substraction);
    
    //pointers to pointers
    x = 50;
    int **point;
    p = &x;
    point = &p;
    cout << **point << endl;


    int arr2[] = {1,2,3,4,5};
    int *start,*stop;

    start = arr2;
    stop = arr2 + 5;

    increment(start,stop);
  

    print(start,stop);

    
    int sam = 10;
    
    int *sp = &sam;

    int **kkp;

    kkp = &sp;

    

    cout << **kkp << " " << sam; 



    




}