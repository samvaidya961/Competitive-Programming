#include<iostream>
using namespace std;

void sortarray(int* arr,const unsigned& size){
     int zeros = 0, ones = 0 , seconds = 0;
     for (int i = 0; i < size; i++)
         switch(arr[i]){
            case 0:
            zeros++;
            break;

            case 1:
            ones++;
            break;

            case 2:
            seconds++;
            break;

            default:
            continue;

         }

     int index = 0;

     while(zeros--)
        arr[index++] = 0;
     
     while(ones--)
       arr[index++] = 1;

     while(seconds--)
       arr[index++] = 2;
     
    
     
}

int main(){
   int arr[] = {0,2,0,1,2};

   sortarray(arr,sizeof(arr)/sizeof(arr[0]));

   for(int i : arr) cout << i << ' ';
}