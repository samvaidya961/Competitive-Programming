#include<iostream>
using namespace std;

#define getMax(a,b) ((a > b) ? a : b)

#define str(x) #x

#define Size 100

#if Size > 10
  #undef Size
  #define Size 10
#elif Size < 10
  #undef Size
  #define Size 10
#endif


int main(){

   #ifdef Size
   int Table[Size];
   #endif
   int s = 1234;
   cout << str(string str = __TIME__); // prints anything in string no use
   cout << getMax(10,20);
   
   //special pragma directives
   cout << endl <<__TIME__ << endl;
   cout << endl <<__DATE__ << endl;
   cout << endl <<__LINE__ << endl;
   cout << endl <<__cplusplus<< endl;
}