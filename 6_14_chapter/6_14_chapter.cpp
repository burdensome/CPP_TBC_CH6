// �����͸� �����Ͻð��� ��ǻ�Ͱ� �̷��� �۵��ϴ±�����ǻ�� ������ �˰��־ ����
// �̷���쿡 �Ϲ����� ������ ���� �ʴ°� �Ǵ°� �˾Ƽ� ���ϴٴ°� �˰ԵǴµ�
// ����ϴٺ��� *�� �ٿ����ϴ°� ������ �� �ִ�.
// �׷��� Ư���� ��쿡 �����ͺ��� �� ���Ѱ� �ִ�.
// �װ� �ٷ� ����������� �Ѵ�. reference variable
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

    //// �̷��� v1�� �����Ϸ��� ot.st.v1 �̷��� �ϴ°� �����ϴ�
    //// �̰� reference������ �����ϰ� �����ϸ� ���� �۾�����
    //int& v1 = ot.st.v1;
    //v1 = 1;

    int value = 5;
    int* const ptr = &value;
    int& ref = value;

    cout << &ptr << endl;
    // �Ʒ� �ΰ� ��ɻ� ���� ��ɸ�
    cout << &value << endl;
    cout << &ref << endl;

    *ptr = 10;
    ref = 10;

    return 0;
}