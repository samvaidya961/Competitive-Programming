#include <iostream>
#include <list>
#include <vector>
#include <set>

using namespace std;

bool iseven(const int& i){
    return !(i & 1);
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5};
    list<int> lst(v.begin(), v.end());

    cout << lst.front() << ' ' << lst.back() << endl;

    for (list<int>::reverse_iterator it = lst.rbegin(); it != lst.rend(); ++it)
    {
        cout << *it << ' ';
    }

    cout << endl;

    lst.emplace_front(0);
    lst.push_front(-10);

    lst.push_back(100);
    lst.emplace_back(200);

    lst.insert(lst.begin(),v.begin(),v.end());

    // lst.assign(3,100);

    lst.sort();

    lst.remove(1);

    lst.remove_if(iseven);

    lst.unique();

    lst.reverse();

    for (int i : lst)
    {
        cout << i << ' ';
    }
}