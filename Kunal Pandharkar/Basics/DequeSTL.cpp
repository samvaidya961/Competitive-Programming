#include<iostream>
#include<deque>
#include<vector>
#include<set>
#include<unordered_set>

using namespace std;

int main(){
   vector<int> v {10,20,30,40};
   unordered_set<int> s {10,20,30};

   deque<vector<pair<int,int>>> dqp; // can define deque of any composite dataype
   
   deque<int> dq(s.begin(),s.end());
   dq.clear();
   dq.push_front(10);
   dq.emplace_front(5);
   dq.push_back(30);
   dq.emplace_back(40);
   
   

   
   cout << dq[0] << endl;
   for(deque<int>::const_reverse_iterator  it = dq.crbegin(); it != dq.crend(); ++it) {
    cout << *it << ' ';
   }

   cout << endl;

   cout << dq.front() << ' ' << dq.back() << endl;

   cout << dq.size() << endl;

   dq.insert(dq.begin(),v.begin(),v.end());
   
   dq.erase(dq.begin(),dq.begin() + (v.size()));

   for (int i = 0; i < dq.size(); i++)
   {
     cout << dq[i] << ' ';
   }
   
   cout << endl;

   dq.pop_back();
   dq.pop_front();

   for(int i : dq) {
    cout << i << ' ';
   }

   cout << *(dq.begin() + 1);

}