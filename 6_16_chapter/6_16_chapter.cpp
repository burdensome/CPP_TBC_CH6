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
    // �̷��� �Ǳ� �ѵ� ���� �̷��� �Ⱦ���. ����Ʈ ���� ȭ��ǥ����
    (*ptr).age = 20;    // �ٵ�!! dereferencing operator�� ���� reference�� �ȴ�.

    // reference�� �� �׳� . (member selection operator) �� ����.
    // ��ư ������ dereferencing operator�� �Ἥ reference�� ���� �ȴٴ°� �˾ƾ���
    Person& ref2 = *ptr;
    ref2.age = 45;

    std::cout << &person << std::endl;
    std::cout << &ref2 << std::endl;

    return 0;
}