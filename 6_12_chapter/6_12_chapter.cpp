#include <iostream>
using namespace std;
int main()
{
    //int length = 5;

    //cin >> length;

    ////int array[length];
    ////int* array = new int[length](); // ()하면 모두 0으로 초기화
    //int* array = new int[length] {11, 22, 33, 44, 55, 66};

    //array[0] = 1;
    //array[1] = 2;

    //for (int i = 0; i < length; ++i)
    //{
    //    cout << (uintptr_t)&array[i] << endl;
    //    cout << array[i] << endl;
    //}

    //delete [] array;


    ///

    int fixedArray[] = { 1,2,3,4,5 };

    int* array = new int[3]{ 1,2,3};

    // resizing -> vector가 알아서 해준다~


    delete[] array;

    return 0;
}