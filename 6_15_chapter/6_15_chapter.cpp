// 함수의 파라미터로 참조를 사용 할 떄 아주 편하게 사용 가능하다.
#include <iostream>

using namespace std;

void doSomething(const int& x)
{
    cout << &x << endl;
    cout << x << endl;
}


int main()
{
    int a = 1;

    doSomething(a);
    doSomething(1);
    doSomething(a + 3);
    doSomething(3 * 4);


    return 0;
}