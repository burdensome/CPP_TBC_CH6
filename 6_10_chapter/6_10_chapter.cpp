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

    //// �� ���� ���� �迭�� �ּ��ε� ���ڿ��� ����� �ɱ�?
    //cout << char_arr << endl;
    //cout << name << endl;

    // c�� �ּҰ� ���ڿ� �̶�� �����ϰ� null charactor�� ���� �� ���� ���
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