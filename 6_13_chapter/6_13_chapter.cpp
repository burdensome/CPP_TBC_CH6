#include <iostream>

using namespace std;

int main()
{
    // ex1)
    const int value = 5;
    const int* ptr = &value;    // value�� ���� �� �ٲ����� �ּ��� ���� �� �������� ���� �ƴϴٶ�� ��
    //*ptr = 6; // value = 6;�� �ȵǴ� ���̰� �ȵǴ� ������ const�����̹Ƿ� �ȵ�

    cout << *ptr << endl;

    // ex2)
    int value2 = 5;
    const int* ptr2 = &value2; // �����ͷ� value�� ���� �ٲ��� �ʰڴٴ� �ǹ�
    //*ptr2 = 6;
    value2 = 6;

    cout << *ptr2 << endl;

    // ex3)
    // const int value3��� ������ ���� �ȹٲٰڵ��� �ǹ��ε�
    int value3 = 5;

    // �������� int * �տ� const�� ���̸� ���� ����Ű�� �ִ� �ּҿ� �ִ� ����
    // �ȹٲٰڴٴ� �ǹ����� �� �ڿ��ִ� ptr3�� �ּ� ���� �ȹٲٰڴٴ� �ǹ̰� �ƴ�
    const int* ptr3 = &value3; 

    // �׷��� ptr3�� �ٸ� �ּҰ��� �ִ� ���� �ȴٴ� ��
    int value4 = 6;
    ptr3 = &value4; 
    //*ptr3 = 7; // ptr3�� const int*�̴� ���� ���� ���ٲ�


    // ex4)
    int value5 = 5;
    int* const ptr5 = &value5;

    *ptr5 = 10;
    cout << *ptr5 << endl;

    int value6 = 8;
    // ��!! ������ int* const ptr5�� ��¥ ������ �ּҰ��� �ٲ��� ���ϴ� ������
    // �̰� ��¥ �������� const�̱� �ϴ�. �޾ƿ� �ּҰ��� �� �ٲٴϱ�!
    //ptr5 = &value6;

    // ex5)
    int value7 = 5;
    //const int* const ptr7;  //*const ptr�̴� �ʱ�ȭ�� ���ϸ� �ȵ�
    const int* const ptr7 = &value7;

    // ����
    // const�� �ٴ°� 3���� ������ �ִٰ� ���� �Ǵµ� �̰� ��𿡾���?
    // �Լ� �Ķ���ͷ� �� �� (2)�� ���� (3)�� ��Ȥ ����
    // (3)�� ���� �ٲ������� �ּҰ��� �ٲ��� ������ ��� �ǹ�
    // �� �� �ǿ������δ� �ڿ� ������ ���� �Ǵµ� ������ ���� ���ݾ� Ÿ����
    // �ϴ°� �������ϴ�
    int r_value = 5;
    const int* r_ptr1 = &r_value;   // (1)
    int* const r_ptr2 = &r_value;   // (2)
    const int* const r_ptr3 = &r_value; //(3)



    return 0;
}