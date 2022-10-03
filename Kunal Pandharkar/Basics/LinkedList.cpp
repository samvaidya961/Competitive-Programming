#include <iostream>
using namespace std;

class List
{
public:
    int data;
    List *next;
    List(int i) : data(i), next(nullptr) {}
};

void PrintList(List temp)
{
    bool flag = true;
    while (true)
    {
        cout << temp.data << ' ';

        if (flag == false)
            break;

        temp = *temp.next;
        if (temp.next == nullptr)
        {
            flag = false;
        }
    }

    // cout << temp.data;
}

void InsertatEnd(List &prev, List &node)
{
    prev.next = &node; // actually changes because we passed it as pointer/ address
}

int main()
{
    List p1(10);
    List p2(20);
    List p3(30);
    List p4(40);
    List p5 = (50);

    InsertatEnd(p1, p2);
    InsertatEnd(p2, p3);
    InsertatEnd(p3, p4);
    InsertatEnd(p4, p5);

    PrintList(p1);
    PrintList(p1);
    PrintList(p1);
    PrintList(p1);
    PrintList(p1);
}