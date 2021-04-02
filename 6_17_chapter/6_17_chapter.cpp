// for each문
#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
   /* int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13,
                                21, 34, 55, 89 };*/

    std::vector<int> fibonacci = { 0, 1, 1, 2, 3, 5, 8, 13,
                                21, 34, 55, 89 };

    // change array values
    // 그럼 for each문으로 값을 변경해보자!
    //for (int number : fibonacci)      // 안되네?
    //    number = 10;
    
    // 이유는 위의 것은 마치 함수 파라미터처럼 들어가는 것이랑 동일하다.
    /*for (int& number : fibonacci)
        number = 10;*/

    // 이야 reference를 쓰니 해결이 되버리네!!
    // 그리고 보통 흔하게 사용하는 방식은?
    //for (auto& number : fibonacci)
    //    number *= 10;

    //// output
    ///*for (int number : fibonacci)
    //    cout << number << " ";
    //cout << endl;*/

    //// output -> 근데 output에서는 보통 값을 바꾸지 않게 하는 것이 좋으니
    //// const를 붙이고 auto에 &를 하는걸 많이 한다.
    //// 즉 이 for루프에서는 number값을 바꾸지 않겠다!
    //for (const auto& number : fibonacci)
    //    cout << number << " ";
    //cout << endl;

    int max_number = std::numeric_limits<int>::lowest();

    for (const auto& n : fibonacci)
        max_number = std::max(max_number, n);

    cout << max_number << endl;

    return 0;
}