#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    stack<int> st;
    vector<int> v = {1,2,3,4,5};
    stack<int,vector<int>> sv(v);

    st.push(20);
    st.push(30);
    st.emplace(40);

    stack<int> s(st);
    cout << st.top() << endl;

    while(!sv.empty()){
        cout << sv.top() << ' ';
        sv.pop();
    }

   
}