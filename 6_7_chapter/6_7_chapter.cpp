#include <iostream>
#include <typeinfo>

using namespace std;

int* doSomething(int* ptr_a)
{
    return 0;
}

struct Something
{
    int a, b, c, d;
};

int main()
{
    //int x = 5;

    //cout << x << endl;
    //cout << &x << endl; // & : address-of operator
    //cout << (int)&x << endl;

    //// de-reference operator (*)
    //// 포인터가 "저쪽 주소에 가면 이 데이터가 있어요" 라고 간접적으로 가리키기만 하는 것에 대해서,
    //// "그럼 거기에 진짜 뭐가 있는지 내가 들여다볼께"라며 직접적으로 접근하겠다는 의미입니다.
    //cout << *&x << endl;    // 연산자 우선순위로 *(&x) == *&x

    int x = 5;
    double d = 1.0;

    //typedef int* pint;
    //pint ptr_x = &x, ptr_y = &x;

    int* ptr_x = &x;
    double *ptr_y = &d;
    // pointer가 타입을 가져야 하는 이유는 de-referencing 할 때 어떤 타입으로 가져와야해요
    // 라는 정보를 담고 있는 것 

    cout << ptr_x << endl;
    cout << *ptr_x << endl;

    cout << ptr_y << endl;
    cout << *ptr_y << endl;

    cout << sizeof(x) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
    cout << sizeof(&d) << " " << sizeof(ptr_y) << endl;
    
    Something ss;
    Something* ptr_s;

    cout << sizeof(Something) << endl;
    cout << sizeof(ptr_s) << endl;

    /*int* ptr_z;
    cout << *ptr_z << endl;*/

    
    return 0;


}