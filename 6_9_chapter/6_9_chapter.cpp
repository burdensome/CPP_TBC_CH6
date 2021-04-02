#include <iostream>

using namespace std;

int main()
{
    char name[] = "jack jack";

    const int n_name = sizeof(name) / sizeof(name[0]);

    char* ptr = name;

    for (int i = 0; i < n_name; ++i)
    {
        cout << *(ptr + i);
    }

    // ++ptr ¿¬½À
    
    //long long array[] = { 9,7,5,3,1 };
    ////double array[] = { 9.0,7.0,5.0,3.0,1.0 };

    //long long* ptr = array;

    //for (int i = 0; i < 5; ++i)
    //{
    //    //cout << array[i] << " " << (uintptr_t) & array[i] << endl;
    //    cout << *(ptr + i) << (uintptr_t)(ptr + i) << endl;
    //}


    /*short value = 7;
    short* ptr = &value;

    cout << uintptr_t(ptr-1) << endl;
    cout << uintptr_t(ptr) << endl;
    cout << uintptr_t(ptr+1) << endl;
    cout << uintptr_t(ptr+2) << endl;*/

    return 0;
}