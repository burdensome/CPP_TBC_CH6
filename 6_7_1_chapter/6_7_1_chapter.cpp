#include <iostream>
#include <cstddef>

void doSomething(double* ptr)
{

    std::cout << "address of pointer variable in doSomething()" << &ptr << std::endl;

    if (ptr != nullptr)
    {
        // do something useful
        std::cout << *ptr << std::endl;
    }
    else    // ������ ���� ����ε� ���� �ƴϱ��� ��� �Ǵ�
    {
        // do nothing with ptr
        std::cout << "Null ptr, do nothing" << std::endl;
    }
}

int main()
{
    //double* ptr = NULL; // c-style
    double* ptr = nullptr;  // modern c++ style
    //double* ptr{ 0 }; //�̶�� �ϰ�
    
    doSomething(ptr);
    doSomething(nullptr);

    double d = 123.4;

    doSomething(&d);

    ptr = &d;

    doSomething(ptr);
    
    // �Ķ�����߿� null pointer�� �־�� �� �� �ִ�.
    // �ٵ� ȫ���� �������� �ẻ���� ���ٰ� �Ͻ�;
    //std::nullptr_t nptr;    // null pointer�ۿ� ������

    std::cout << "address of pointer variable in main()" << &ptr << std::endl;

    //if(ptr != nullptr)
    //{
    //    // do something useful
    //}
    //else    // ������ ���� ����ε� ���� �ƴϱ��� ��� �Ǵ�
    //{
    //    // do nothing with ptr
    //}

    return 0;
}