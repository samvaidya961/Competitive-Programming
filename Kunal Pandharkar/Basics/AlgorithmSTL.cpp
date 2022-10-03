#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <deque>
using namespace std;

bool isOdd(const int &i)
{
    if (i % 2 == 0)
        return false;
    return true;
}

void changeVal(int &i)
{
    i = 20;
}

bool comp(const int &i)
{
    if (i & 1)
        return true;
    return false;
}

bool comp2(const int &i, const int &i2)
{
    if (i % 2 == 0)
        return false;
    return true;
}

int main()
{
    vector<int> v{10, 10, 0, 3, 5, 7, 3, 5, 7, 10};
    int arr[] = {3, 5, 7};

    auto it = find_end(v.begin(), v.end(), arr, arr + 3) - v.begin();

    cout << it << endl;

    set<int> s{1, 2, 3, 4, 5};
    map<char, int> mp;
    mp.emplace('A', 10);
    mp.emplace('B', 10);
    mp.emplace('C', 10);
    deque<int> dq(arr, arr + 4);

    // for_each(v.begin(),v.end(),changeVal); // this can also modify vale if pass by reference

    for (int i : v)
        cout << i << ' ';
    cout << endl;

    // auto it = find(v.begin(),v.end(),10) - v.begin(); // return index of element

    // auto it = mp.find('C');

    // cout <<it->second<< endl;

    cout << find_if(v.begin(), v.end(), isOdd) - v.begin() << endl;

    if (all_of(v.begin(), v.end(), isOdd))
        cout << "all are odd" << endl;

    if (any_of(s.begin(), s.end(), isOdd))
        cout << "any one is odd" << endl;

    if (none_of(dq.begin(), dq.end(), isOdd))
        cout << "no one is odd" << endl;

    cout << endl;

    int findfrist[] = {7, 3, 5};

    for (int i : v)
        cout << i << ' ';

    cout << endl;

    cout << find_first_of(v.begin(), v.end(), findfrist, findfrist + 3) - v.begin();

    v = {1, 2, 3, 4, 5, -1};
    vector<int> v2 = {4, 5, 1};

    cout << endl;

    // replace_if(v.begin(), v.end(), comp, 100);

    for (int i : v)
        cout << i << ' ';
    cout << endl;

    random_shuffle(v.begin(), v.end());
    for (int i : v)
        cout << i << ' ';
    cout << endl;
    random_shuffle(v.begin(), v.end());
    for (int i : v)
        cout << i << ' ';
    cout << endl;
    random_shuffle(v.begin(), v.end());

    sort(v.begin(), v.end(), greater<int>());

    cout << "sorted using comp2 " << endl;

    sort(v.begin(), v.end(), comp2);

    sort(v.begin(),v.end());

    v[0] = -100;


    if(is_sorted(v.begin(),v.end()))
       cout <<endl<< "yes sorted";
    else
       cout <<endl<< "not sorted";

    cout << endl;

    for(int i : v) cout << i << ' ';

    cout << endl;

    pair<vector<int>::iterator,vector<int>::iterator> p = minmax_element(v.begin(),v.end());

    cout << "Min = " << *p.first << " MaX = " << *p.second << endl;
    
    cout << endl;
    for (int i : v)
        cout << i << ' ';
    cout << endl;

    cout << "sub = " << search(v.begin(), v.end(), v2.begin(), v2.end()) - v.begin() << endl;

    cout << count(v.begin(), v.end(), 1) << endl;

    cout << count_if(v.begin(), v.end(), comp) << endl;

    if (equal(v.begin(), v.begin() + 3, v2.begin(), v2.begin() + 3))
        cout << "Equal";
    else
        cout << "Not Equal";

    string str = "ABC";

    int arr1[] = {1,2,3,4,5};

    cout << endl;

    do{
        for(int i: arr1) cout << i << ' ';
        cout << endl;
    }while(next_permutation(arr1,arr1+5));
}