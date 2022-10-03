#include <iostream>
#include <algorithm>
using namespace std;

int minElement(int *arr, const unsigned &size)
{
    // way 1
    //  int minEL = arr[0];
    //  for (int i = 1; i < size; i++)
    //      if (minEL > arr[i])
    //          minEL = arr[i];
    //  return minEL;

    // way 2
    //  return *min_element(arr,arr+size);

    // way 3
    sort(arr, arr + size);

    return arr[0];
}

int maxElement(int *arr, const unsigned &size)
{
    // way 1
    // int maxEL = arr[0];

    // for (int i = 0; i < size; i++)
    //     if (maxEL < arr[i])
    //         maxEL = arr[i];
    // return maxEL;

    // way 2
    //  return *max_element(arr,arr+size);
    
    // way 3
    sort(arr, arr + size, greater<int>());

    return arr[0];
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 100, 10, 30, 50};
    int arr3[] = {-1, -2, -3, 0};

    cout << minElement(arr, sizeof(arr) / sizeof(int)) << ' ' << maxElement(arr, sizeof(arr) / sizeof(int)) << endl;
    cout << minElement(arr2, sizeof(arr2) / sizeof(int)) << ' ' << maxElement(arr2, sizeof(arr2) / sizeof(int)) << endl;
    cout << minElement(arr3, sizeof(arr3) / sizeof(int)) << ' ' << maxElement(arr3, sizeof(arr3) / sizeof(int)) << endl;
}