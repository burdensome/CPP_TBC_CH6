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
    //// �����Ͱ� "���� �ּҿ� ���� �� �����Ͱ� �־��" ��� ���������� ����Ű�⸸ �ϴ� �Ϳ� ���ؼ�,
    //// "�׷� �ű⿡ ��¥ ���� �ִ��� ���� �鿩�ٺ���"��� ���������� �����ϰڴٴ� �ǹ��Դϴ�.
    //cout << *&x << endl;    // ������ �켱������ *(&x) == *&x

    int x = 5;
    double d = 1.0;

    //typedef int* pint;
    //pint ptr_x = &x, ptr_y = &x;

    int* ptr_x = &x;
    double *ptr_y = &d;
    // pointer�� Ÿ���� ������ �ϴ� ������ de-referencing �� �� � Ÿ������ �����;��ؿ�
    // ��� ������ ��� �ִ� �� 

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