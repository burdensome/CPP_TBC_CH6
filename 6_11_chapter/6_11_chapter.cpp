// 우리가 만든 프로그램에 메모리가 할당되는 것은 3가지 종류로 나뉩니다
// 1. 정적메모리 얼로케이션 static variable allocation, 전역변수나, 스태틱변수와 같이
// 한번 선언되면 메모리를 쭉 가지고있는걸 말함
// 자동메모리 할당이 있씁니다. 변수를 선언하거나 정적배열을 선언을 했을 떄
// 블록 밖으로 나가면 전부 사라지고 다시 메모리가 os로 할당이 된다고 말씀을 드렸죠
// 3번째 카테고리가 있는데 이게 동적메모리 할당이다.
// Dynamic memory allocation. 포인터와 관련해서 가장 까다로운 개념 중 하나
// 장기적으로 스스로 만든 라이브로리를 가지고 사용할 것이기 떄문에 걱정할 필요는 없다.
#include <iostream>

using namespace std;

int main()
{
    // 프로그래머 입장에서 100만개는 많은 것이 아니지만 하지만 100만개의
    // 정적배열을 생성하려고 하고 실행을 해본다면
    //int monsters[1000000];  // stack에 들어감. stack은 굉장히 작다.

    //int var;
    // 아래 내용은 var = 7; 과 같다.
    //int* ptr = new int{ 7 };

    // 다른프로그램이 메모리를 다 써서 더이상 할당받을 메모리가 없을 경우에
    // 프로그램이 죽어버리는 경우도 있고, 그게 아니라면 
    // 메모리가 비워지길 기다리고 있다가 나중에 할당을 받을 수 있게 할 수도 있겠다.
    // 그럴떄는 new가 에러를 일으켜도 버티고 있어야 할 것이다 그 방법은?
    //int* ptr = new(std::nothrow) int{ 7 };

    ////*ptr = 7;
    //if (ptr)    // 메모리를 못받으면 위에 nothrow에서 0을 반환
    //{
    //    cout << ptr << endl;
    //    cout << *ptr << endl;
    //}
    //else
    //{
    //    cout << "Could not allocate memory" << endl;
    //}
    //// os에 위와 같이 new로 할당받은 메모리를 다시 os에 돌려주는 것이 정말 중요하다.
    //// 할당받은 메모리를 os에 돌려줬다고 다시 할방받고 이렇게 한다.
    //// 급한애한테 메모리를 많이 줬다가 돌려주고 다시 다음 놈한테 메모리를 할당해주고
    //// 이렇게 할 수 있다.

    //// 근데 delete ptr; 이 없어도 에러가 안나왔따 이유는. 
    //// os가 알아서 반납을 해버렸기 때문. 근데 아래는 내가 알아서 메모리를 반환하겠다는 의미
    //delete ptr;

    //// 방지방법
    //ptr = nullptr;

    //cout << "After delete" << endl;
    //if (ptr != nullptr) // 그냥 if(ptr)을 해도되는데 홍교수님은 != nullptr로 한다. 이유는 남이 봐도 보기 쉽게
    //{
    //    cout << ptr << endl;
    //    cout << *ptr << endl;
    //}

    //int* ptr = new(std::nothrow) int{ 7 };
    //int* ptr2 = ptr;

    //delete ptr;
    //ptr = nullptr;
    //ptr2 = nullptr;

    //// *ptr2

    // memory leak
    // 메모리를 그냥 계속 만들기만 하는거야. 쓰지는않고..
    // 해당 메모리가 어디있는지 알 수도 없어
    while (true)
    {
        int* ptr = new int;
        cout << ptr << endl;
        delete ptr;
    }
    // new, delete을 자주 하는 것은 좋지 않다. 
    // 시간이 많이 걸리기 떄문.. 요즘은 자동으로 해주는 것이 있는데
    // 그렇게 쓴다면 new/delete를 많이 사용할 수 밖에 없겠찌
    // c++을 사용해서 메모리 최적화를 직접 할 수 있다라는 이야기


    return 0;
}