#include <iostream>
#include <algorithm>
#include <map>
#include <queue>
using namespace std;

int findKthMax(int *arr, int k, int size)
{
    // way 1
    //  sort(arr,arr+size,greater<int>());
    //  return arr[k-1];
    
    //way 2 <similar i can do with sets>
    // map<int, int> mp;
    // for (int i = 0; i < size; i++)
    //     mp[arr[i]]++;
    // map<int,int>::reverse_iterator it = mp.rbegin();
    // while(--k) it++;
    // return it->first;

    //way 3
    priority_queue<int> pq(arr,arr+size);
    while(--k) pq.pop();
    return pq.top();

}

int findKthMin(int *arr, int k, int size)
{
    // way 1
    // sort(arr,arr+size);
    // return arr[k-1];
    
    //way 2
    // map<int, int> mp;
    // for (int i = 0; i < size; i++)
    //     mp[arr[i]]++;
    // auto it = mp.begin();
    // while (--k) it++;
    // return it->first;
    
    //way 3
    priority_queue<int> pq(arr,arr+size);
    k = pq.size() - k;
    while(k--) pq.pop();
    return pq.top();
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 0};
    int k = 3;

    cout << findKthMax(arr, k, sizeof(arr) / sizeof(int)) << endl;
    cout << findKthMin(arr, k, sizeof(arr) / sizeof(int)) << endl;
}