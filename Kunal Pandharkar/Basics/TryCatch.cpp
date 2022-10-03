#include <iostream>
#include <exception>

using namespace std;

int main()
{
    try
    {
        throw 'A';
        // throw 20;
    }
    catch (int i)
    {
        cout << "Exception " << i;
    }
    catch (char c)
    {
        cout << "Exception " << c;
    }
    catch (...)
    { // default catch
        cout << "Default Catch";
    }

    try
    {
        long long  *c = new long long[100000000];
    }
    catch (const exception &e)
    {
        cout << e.what() << '\n';
    }
}