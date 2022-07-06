#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findUnique(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < size;)
    {
        if (arr[i] == arr[i + 1])
        {
            i = i + 2;
            continue;
        }
        return arr[i];
        break;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<findUnique(arr,n);
    return 0;
}