// void ������
#include <iostream>

using namespace std;

// void pointer, generic pointer��� �Ҹ�

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

    //cout << ptr + 1 << endl;    // void�� ������ ������ �� �� ����. ������Ÿ���� �𸣴� ũ�⵵ ���� �� �� ���� ��
 

    //cout << &f << " " << ptr << endl;
    //cout << *static_cast<float*>(ptr) << endl;  // static cast�� floatŸ���� ������ ���� �ٽ� dereferencing

    // ���ſ��� �Ʒ�ó�� �����ϰ� ��µ� ������ �� ��������.
    Type type = FLOAT;

    if (type == FLOAT)
        cout << *static_cast<float*>(ptr) << endl;
    else if (type == INT)
        cout << *static_cast<int*>(ptr) << endl;

    return 0;
}