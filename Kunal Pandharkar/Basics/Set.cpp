#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.emplace(10);
    s.emplace(30);
    
    s.insert(s.begin(),10);


    int arr[] = {1, 2, 3, 4, 5};

    s.insert(arr, arr + 5);

    pair<set<int>::iterator, bool> p;

    p = s.insert(1);

    if (p.second == true)
        cout << "Element inserted";
    else
        cout << "element exist at poistion ";

    cout << endl;

    for (set<int>::reverse_iterator it = s.rbegin(); it != s.rend(); it++)
        cout << *it << ' ';

    cout << endl;

    for (int i : s)
        cout << i << ' ';

    cout << endl;

    auto it = s.find(121);

    it = s.upper_bound(5);

    s.erase(s.begin(), it);

    for (int i : s)
        cout << i << ' ';
    cout << endl;

    if (it != s.end())
        cout << "element found !";
    else
        cout << "Element Not Found!";

    s.clear();

    cout << endl
         << s.size();

    s.emplace(10);
    s.emplace(20);
    s.emplace(30);
    s.emplace(40);
    s.emplace(50);

    cout << endl;

    cout << *s.lower_bound(21) << " " << *s.upper_bound(20);
    cout << endl;

    if(s.end() == s.upper_bound(50)) cout << "Similar" << endl;

    for (auto it = s.lower_bound(10); it != s.upper_bound(50); it++)
        cout << *it << " ";
}