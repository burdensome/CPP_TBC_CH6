// void 포인터
#include <iostream>

using namespace std;

// void pointer, generic pointer라고도 불림

enum Type
{
    INT,
    FLOAT,
    CHAR,
};

int main()
{
    int i = 5;
    float f = 3.0;
    char c = 'c';

    void* ptr = nullptr;

    ptr = &i;
    ptr = &f;
    //ptr = &c;

 

    /*int* ptr_i = &i;

    cout << ptr_i << endl;
    cout << ptr_i + 1 << endl;*/

    //cout << ptr + 1 << endl;    // void라서 포인터 연산을 할 수 없음. 데이터타입을 모르니 크기도 몰라서 할 수 없는 것
 

    //cout << &f << " " << ptr << endl;
    //cout << *static_cast<float*>(ptr) << endl;  // static cast로 float타입의 포인터 값을 다시 dereferencing

    // 과거에는 아래처럼 복잡하게 썼는데 요즘은 더 좋아졌다.
    Type type = FLOAT;

    if (type == FLOAT)
        cout << *static_cast<float*>(ptr) << endl;
    else if (type == INT)
        cout << *static_cast<int*>(ptr) << endl;

    return 0;
}