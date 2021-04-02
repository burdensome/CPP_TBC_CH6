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
    else    // 포인터 값이 제대로된 값이 아니구나 라고 판단
    {
        // do nothing with ptr
        std::cout << "Null ptr, do nothing" << std::endl;
    }
}

int main()
{
    //double* ptr = NULL; // c-style
    double* ptr = nullptr;  // modern c++ style
    //double* ptr{ 0 }; //이라고도 하고
    
    doSomething(ptr);
    doSomething(nullptr);

    double d = 123.4;

    doSomething(&d);

    ptr = &d;

    doSomething(ptr);
    
    // 파라미터중에 null pointer만 넣어야 할 게 있다.
    // 근데 홍정모 교수님은 써본적이 없다고 하심;
    //std::nullptr_t nptr;    // null pointer밖에 못넣음

    std::cout << "address of pointer variable in main()" << &ptr << std::endl;

    //if(ptr != nullptr)
    //{
    //    // do something useful
    //}
    //else    // 포인터 값이 제대로된 값이 아니구나 라고 판단
    //{
    //    // do nothing with ptr
    //}

    return 0;
}