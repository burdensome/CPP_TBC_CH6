#include <iostream>

struct Person
{
    int age;
    double weight;
};

int main()
{
    Person person;

    person.age = 5;
    person.weight = 30;

    Person& ref = person;
    ref.age = 15;
    
    Person* ptr = &person;
    ptr->age = 30;    
    // 이렇게 되긴 한데 막상 이렇게 안쓰지. 포인트 쓸땐 화살표쓰고
    (*ptr).age = 20;    // 근데!! dereferencing operator를 쓰면 reference가 된다.

    // reference쓸 땐 그냥 . (member selection operator) 를 쓴다.
    // 암튼 포인터 dereferencing operator를 써서 reference를 쓰면 된다는건 알아야함
    Person& ref2 = *ptr;
    ref2.age = 45;

    std::cout << &person << std::endl;
    std::cout << &ref2 << std::endl;

    return 0;
}