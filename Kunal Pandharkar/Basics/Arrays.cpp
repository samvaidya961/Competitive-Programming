#include <iostream>
using namespace std;

int arrayglobal[5];

void print(int arr[])
{
    for (int i = 0; i < 5; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

void print(int arr[][2]){
     for (int i = 0; i < 2; i++)
     {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
        
     }
     
}

int*  createArray(){
    int* arr;

    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }
    
    return arr;
}

int main()
{
    int arr[2][2] = {{1,2},{1,3}};
    print(arr);
    int arraylocal[5] = {1, 2, 3, 4};
    int arr1[]{1, 2, 3, 4, 5};

    print(arrayglobal);
    print(arraylocal);
    print(arr1);

    cout << arr1[arraylocal[0]];

    char str[20] = "Kunal";

    cout << endl
         << str << endl;

    for (char c : str)
    {
        cout << c << ' ';
    }

    int s = sizeof(str) / sizeof(str[0]);

    cout << endl
         << s << endl;

    for (int i = 0; i < s; i++)
    {
        if (str[i] == '\0')
            break;
        cout << i << str[i] << endl;
    }


    string str1 = "Kunal";

    str1[1] = 'S';

    cout << str1;

    int* arr2 = createArray();
    
    cout << endl;

    for(int i= 0; i < 5;i++) cout << arr2[i] << ' ';

    
}