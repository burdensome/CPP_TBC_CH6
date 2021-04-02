#include <iostream>

using namespace std;

const char* getName()
{
    return "jack jack";
}

int main()
{
    int int_arr[5] = { 1,2,3,4,5 };
    char char_arr[] = "Hello, World!";
    const char* name = "jack jack";

    //cout << int_arr << endl;

    //// 왜 위와 같은 배열의 주소인데 문자열이 출력이 될까?
    //cout << char_arr << endl;
    //cout << name << endl;

    // c의 주소가 문자열 이라고 가정하고 null charactor가 나올 때 까지 출력
    char c = 'Q';
    cout << &c << endl;
    cout << *&c << endl;

    ////char name [] = "jack jack"
    //const char* name = getName();
    //const char* name2 = getName();

    //cout << (uintptr_t)name << endl;
    //cout << (uintptr_t)name2 << endl;

    return 0;
}