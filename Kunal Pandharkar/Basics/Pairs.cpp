#include<iostream>
#include<utility>

using namespace std;

int main(){
    pair<string,int> p1("Kunal",2009);
    pair<string,int> p2(p1);

    cout << p2.first << " " << p2.second << endl;

    auto mp = make_pair("Samruddhi",20);

    cout << mp.first << ' ' << mp.second << endl;

    cout << get<0>(mp);

}