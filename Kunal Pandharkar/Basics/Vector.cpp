#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v1;

    cout << "size of vector = " << v1.size() << endl;

    v1.push_back(10);
    v1.emplace_back(20);

    v1.pop_back();

    cout << "Size of vector after push = " << v1.size() << endl;

    v1.emplace(v1.begin(),20);

    v1.insert(v1.begin(), 30);
    
    int arr[] = {40,50,60};

    v1.insert(v1.begin(),arr,arr+3);
    // v1.emplace(v1.begin(),arr,arr+3);
    for(vector<int>::iterator it = v1.begin();it!=v1.end();it++){
        cout << *it << " ";
    }

    cout << endl;

    for(auto it = v1.rbegin();it!=v1.rend();it++)
    cout << *it << " ";

    int *p = v1.data();

    cout << endl;

    cout << *(p+5);

    cout << endl;

    v1.clear();

    if(v1.empty()) cout << "vector is empty";
    else cout << "Vector is not empty1";

    v1.emplace_back(10);
    v1.emplace_back(20);

    cout << endl;

    cout << v1.front() << ' ' << v1.back();
    vector<int> v2;

    v2 = v1;

    cout << endl;

    for(int i : v2) cout << i << ' ';

    v2.erase(v2.begin());

    v2.erase(v2.begin(),v2.begin() + 2);
    
    cout << endl;

    for(int i : v2) cout << i << ' ';

    v2.insert(v2.begin(),10);
    
    cout << endl;

    for(int i : v2) cout << i << ' ';


    cout << endl;

    v1[1] = 30;
    
    if(v1 == v2) cout <<"Equal vectors";
    else cout << "not equal";


    cout << endl;

    v2[0] = 40;

    v1.clear();
    v2.clear();

    v1.emplace_back(30);
    v1.emplace_back(-30);
    v2.emplace_back(20);
    v2.emplace_back(0);
    
    // decide always on the first element
    if(v1 > v2) cout << "v1 > v2";
    else cout << "v2 > v1";

}