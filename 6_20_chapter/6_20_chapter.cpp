#include <iostream>
#include <array>
#include <algorithm>

using namespace std;
// &를 쓰지 않으면 복사가 되서 작업되기 때문에 복사를 막기 위해서
// 사용하고, 값도 안바꾼다면 const를 쓴다.
void printLenghth(const array<int, 5>& my_arr)
{
    cout << my_arr.size() << endl;
}

int main()
{
    //int array[5] = { 1,2,3,4,5 };

    // 함수 파라미터로 넘길 때 훨씬 좋다.
    //std::array<int, 5> my_arr = { 1,2,3,4,5 };
    array<int, 5> my_arr = { 1,21,3,40,5 };
    //my_arr = { 0, 1, 2, 3,4 };
    //my_arr = { 0,1,2, };

    cout << my_arr[3] << endl;
    // std array에는 위에 말고도 at이라는 것을 쓸 수 있음
    // 그럼 위에 배열과 다른게 뭐냐?
    // at을 쓰면 배열의 크기가 넘어갔다면 예외처리를 해주게 된다.
    // 하지만 예외처리를 해주면 경계검사를 한번씩 해주게 되니
    // 약간의 속도차이가 있게된다. 퍼포먼스가 아주 중요한 프로그램을
    // 짠다면 위의 my_arr[x] 을 써야한다.
    cout << my_arr.at(4) << endl;
    cout << my_arr.size() << endl;

    for (auto &element : my_arr)
        cout << element << " ";
    cout << endl;

    //std::sort(my_arr.begin(), my_arr.end());
    std::sort(my_arr.rbegin(), my_arr.rend());

    for (auto& element : my_arr)
        cout << element << " ";
    cout << endl;

    printLenghth(my_arr);

    return 0;
}