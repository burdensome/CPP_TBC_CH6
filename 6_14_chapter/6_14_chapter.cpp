// 포인터를 이해하시고나면 컴퓨터가 이렇게 작동하는구나컴퓨터 구조를 알고있어서 좋다
// 이런경우에 일반적인 변수로 되지 않는게 되는걸 알아서 편하다는걸 알게되는데
// 사용하다보면 *을 붙여야하는게 귀찮을 수 있다.
// 그래서 특정한 경우에 포인터보다 더 편한게 있다.
// 그걸 바로 참조변수라고 한다. reference variable
#include <iostream>

using namespace std;

void doSomething(const int &other_n)
{
    cout << &other_n << endl;
    //other_n = 10;
    cout << "In doSomething " << other_n << endl;
}

void printElements(int(&arr)[5])
{
    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";

    }
    cout << endl;
}

struct Something
{
    int v1;
    float v2;
};

struct Other
{
    Something st;
};

int main()
{
    /*int value = 5;

    int* ptr = nullptr;
    ptr = &value;

    int& ref = value;

    cout << &value << endl;
    cout << &ref << endl;
    cout << ptr << endl;
    cout << &ptr << endl;*/


    /*int x = 5;
    int& ref = x;

    const int y = 8;
    const int& ref = y;*/

    //int value1 = 5;
    //int value2 = 10;

    //int& ref1 = value1;
    //
    //cout << ref1 << endl;

    //ref1 = value2;

    //cout << ref1 << endl;


    /*int n = 5;
    
    cout << n << endl;
    cout << &n << endl;

    doSomething(n);

    cout << n << endl;*/

    /*const int length = 5;
    int arr[length] = { 1,2,3,4,5 };

    printElements(arr);*/

    //Other ot;

    //// 이렇게 v1을 접근하려면 ot.st.v1 이렇게 하는게 복잡하니
    //// 이걸 reference변수로 선언하고 진행하면 쉽게 작업가능
    //int& v1 = ot.st.v1;
    //v1 = 1;

    int value = 5;
    int* const ptr = &value;
    int& ref = value;

    cout << &ptr << endl;
    // 아래 두개 기능상 동일 기능만
    cout << &value << endl;
    cout << &ref << endl;

    *ptr = 10;
    ref = 10;

    return 0;
}