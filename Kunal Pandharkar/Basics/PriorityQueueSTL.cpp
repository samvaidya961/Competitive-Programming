#include<iostream>
#include<queue>
#include<set>

using namespace std;

int main(){
    set<int> v = {1,2,3,4,5};
    priority_queue<int> p(v.begin(),v.end());
    priority_queue<int,vector<int>,greater<int>> pq; // giving vector int is also mandatory

    pq.emplace(10);
    pq.emplace(20);
    pq.emplace(100);
    pq.push(5);

    cout << pq.size() << ' ' << pq.top() << endl;

    while(!p.empty()){
        cout << p.top() << ' ' ;
        p.pop();
    }


}