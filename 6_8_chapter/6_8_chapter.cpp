// 포인터와 배열이 어떤관계를 이루어지는지 결론부터말하면 둘이 같습니다.
#include <iostream>

using namespace std;
//oid printArray(int array[])
void printArray(int *array)
{
    cout << sizeof(array) << endl;
    cout << *array << endl;

    *array = 100;
}

struct MyStruct
{
    int array[5] = { 10, 9 ,8,7,6 };
};

void doSomething(MyStruct *ms)
{
    cout << sizeof((*ms).array) << endl;
}

int main()
{
    int array[5] = { 9, 7, 5, 3, 1 };

    cout << sizeof(array) << endl;

    int* ptr = array;

    cout << *ptr << " " << *(ptr + 1) << endl;


    MyStruct ms;
    cout << ms.array[0] << endl;
    cout << sizeof(ms.array) << endl;

    doSomething(&ms);

    /*cout << sizeof(ptr) << endl;

    printArray(array);

    cout << array[0] << " " << *array << endl;*/

    /////////////////////////////////////////////////
    /*cout << array[0] << " " << array[1] << endl;
    cout << array << endl;
    cout << &(array[0]) << endl;

    cout << *array << endl;

    int* ptr = array;
    cout << ptr << endl;
    cout << *ptr << endl;*/

   /* char name[] = "jackjack";
    cout << *name << endl;*/

    return 0;
}