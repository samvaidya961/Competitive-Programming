#include<iostream>
using namespace std;

void Movearray(int* arr, const unsigned size){
   int start = 0, end = size-1;
   for (int i = 0; i < size; i++) // 1 2 -3 -4 5 -1
   {
      if(arr[i] < 0){
          if(start != i){
            int temp = arr[start];
            arr[start] = arr[i];
            arr[i] = temp;
          }
          start++;
      }
   }
   
}

int main(){
   int arr[] = {1,2,-3,-4,5,-1};

   Movearray(arr,sizeof(arr)/sizeof(arr[0]));

   for(int i : arr) cout << i << ' ';
}