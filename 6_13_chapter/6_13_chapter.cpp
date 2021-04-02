#include <iostream>

using namespace std;

int main()
{
    // ex1)
    const int value = 5;
    const int* ptr = &value;    // value의 값은 못 바꾸지만 주소의 값을 못 가져오는 것은 아니다라는 것
    //*ptr = 6; // value = 6;이 안되는 것이고 안되는 이유는 const변수이므로 안됨

    cout << *ptr << endl;

    // ex2)
    int value2 = 5;
    const int* ptr2 = &value2; // 포인터로 value의 값을 바꾸지 않겠다는 의미
    //*ptr2 = 6;
    value2 = 6;

    cout << *ptr2 << endl;

    // ex3)
    // const int value3라면 변수의 값을 안바꾸겠따는 의미인데
    int value3 = 5;

    // 포인터인 int * 앞에 const를 붙이면 내가 가리키고 있는 주소에 있는 값을
    // 안바꾸겠다는 의미이지 그 뒤에있는 ptr3의 주소 값을 안바꾸겠다는 의미가 아님
    const int* ptr3 = &value3; 

    // 그래서 ptr3에 다른 주소값을 넣는 것은 된다는 것
    int value4 = 6;
    ptr3 = &value4; 
    //*ptr3 = 7; // ptr3이 const int*이니 역시 값은 못바꿈


    // ex4)
    int value5 = 5;
    int* const ptr5 = &value5;

    *ptr5 = 10;
    cout << *ptr5 << endl;

    int value6 = 8;
    // 아!! 이제야 int* const ptr5가 진짜 포인터 주소값을 바꾸지 못하는 것으로
    // 이게 진짜 포인터의 const이긴 하다. 받아온 주소값을 못 바꾸니깐!
    //ptr5 = &value6;

    // ex5)
    int value7 = 5;
    //const int* const ptr7;  //*const ptr이니 초기화를 안하면 안됨
    const int* const ptr7 = &value7;

    // 정리
    // const가 붙는게 3가지 정도로 있다고 보면 되는데 이거 어디에쓰나?
    // 함수 파라미터로 들어갈 때 (2)도 들어가고 (3)도 간혹 들어간다
    // (3)은 값도 바꾸지말고 주소값도 바꾸지 마세요 라는 의미
    // 좀 더 실용적으로는 뒤에 참조를 배우게 되는데 참조를 쓰면 조금씩 타이핑
    // 하는게 편해집니다
    int r_value = 5;
    const int* r_ptr1 = &r_value;   // (1)
    int* const r_ptr2 = &r_value;   // (2)
    const int* const r_ptr3 = &r_value; //(3)



    return 0;
}