#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
    map<string, int> mp;

    mp.emplace("Kunal", 100);
    mp["Kunal"] = 300;


    map<string, int> mp2(mp.begin(), mp.end());

    pair<map<string, int>::iterator, bool> it = mp.insert(make_pair<string, int>("Samruddhi", 200));

    if (it.second == false)
        cout << "element already exist" << endl;
    else
        cout << "element inserted" << it.first->first << endl;
    it = mp.insert(make_pair<string, int>("Samruddhi", 200));

    if (it.second == false)
        cout << "element already exist" << endl;
    else
        cout << "element inserted" << endl;

    for (pair<string, int> p : mp)
        cout << p.first << ' ' << p.second << endl;

    cout << mp.count("Kunal");

    cout << endl
         << mp.at("Kunal") << endl
         << endl;

    for (pair<string, int> p : mp)
        cout << p.first << ' ' << p.second << endl;

    // mp.erase("Kunal");
    // mp.erase(mp.begin(), mp.end());
    mp.erase(mp.find("Samruddhi"));

    for (pair<string, int> p : mp)
        cout << p.first << ' ' << p.second << endl;

    // for(pair<string,int> p : mp2) cout << p.first << ' ' << p.second << endl;

    unordered_map<int, int> ump;

    ump[1] = 1;
    ump[2] = 1;
    ump[3] = 1;
    ump[4] = 1;

    for (auto it : ump)
        cout << it.first << ' ' << it.second << endl;

    cout << ump.find(2)->second;

    unordered_multimap<int, int> mm;

    mm.insert(make_pair<int, int>(1, 20));
    mm.insert(make_pair<int, int>(2, 10));
    mm.insert(make_pair<int, int>(1, 10));

    cout << endl;
    for (auto it : mm)
        cout << it.first << ' ' << it.second << endl;

    cout << mm.find(1)->second;

    mm.erase(1);

    cout << endl;

    for (auto it : mm)
        cout << it.first << ' ' << it.second << endl;
}