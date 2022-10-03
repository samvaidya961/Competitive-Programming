#include<iostream>
#include<algorithm>
using namespace std;

void ReverseArray(int *arr, int size){
     if(size == 0) return;
    
    // way 1
    //  for (int i = 0; i < (size / 2); i++)
    //  {
    //      int temp = arr[size - i - 1];
    //      arr[size - i - 1] = arr[i];
    //      arr[i] = temp;
    //  }

    // way 2
    // int i = 0, j = size - 1;
    // for (; i < (size/2), j > (size/2); i++,j--)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    // }

    //way 3
    reverse(arr,arr + size);
    
     
}

int main(){
    int arr[] = {1,2,3,4,5};

    int arr1[] = {5,4,3,2,1};

    int arr3[] = {0,0,1,0,1};

    ReverseArray(arr,sizeof(arr)/sizeof(int));
    ReverseArray(arr1,sizeof(arr1)/sizeof(int));
    ReverseArray(arr3,sizeof(arr3)/sizeof(int));

    for(int i : arr) cout << i <<' ';
    cout << endl;

    for(int i : arr1) cout << i <<' ';
    cout << endl;

    for(int i : arr3) cout << i <<' ';
    cout << endl;
    
}