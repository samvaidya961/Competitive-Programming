#include <iostream>

using namespace std;

// Program for identifying all the ranges of datatypes

int main()
{

    cout << "Signed Integer : " << endl;
    cout << "short int : " << INT16_MIN << " - " << INT16_MAX << endl;
    cout << "int : " << INT32_MIN << " - " << INT32_MAX << endl;
    cout << "long int : " << INT32_MIN << " - " << INT32_MAX << endl;
    cout << "long long int : " << INT64_MIN << " - " << INT64_MAX << endl << endl;

    cout << "UnSigned Integer : " << endl;
    cout << "short int : " << 0 << " - " << UINT16_MAX << endl;
    cout << "int : " << 0 << " - " << UINT32_MAX << endl;
    cout << "long int : " << 0 << " - " << UINT32_MAX << endl;
    cout << "long long int : " << 0 << " - " << UINT64_MAX << endl;

}