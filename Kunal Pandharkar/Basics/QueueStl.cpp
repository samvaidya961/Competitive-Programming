#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;



   
    

    q.emplace(10);
    q.push(20);
    q.emplace(30);

    cout << q.front() << ' ' << q.back() << ' ' << q.size() << endl;

    while (!q.empty())
    {
        cout << q.front() << ' ';
        q.pop();
    }
}