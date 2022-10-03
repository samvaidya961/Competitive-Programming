#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // input file - write to file
    ofstream s1;
    s1.open("KP.txt", ios::app);
    if (s1.is_open())
        s1 << "Hello my name is Kunal"
           << "\nim a good coder";
    else
        cout << "File Dont Exist";
    s1.close();

    //output file - read from file
    ifstream f1;
    f1.open("KP.txt");
    string line;
    if (f1.is_open())
        while (getline(f1, line))
            cout << line << endl;
    else
        cout << "Unable to open file";
    f1.close();
}