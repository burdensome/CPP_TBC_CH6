#include <iostream>
#include <array>
#include <algorithm>

using namespace std;
// &�� ���� ������ ���簡 �Ǽ� �۾��Ǳ� ������ ���縦 ���� ���ؼ�
// ����ϰ�, ���� �ȹٲ۴ٸ� const�� ����.
void printLenghth(const array<int, 5>& my_arr)
{
    cout << my_arr.size() << endl;
}

int main()
{
    //int array[5] = { 1,2,3,4,5 };

    // �Լ� �Ķ���ͷ� �ѱ� �� �ξ� ����.
    //std::array<int, 5> my_arr = { 1,2,3,4,5 };
    array<int, 5> my_arr = { 1,21,3,40,5 };
    //my_arr = { 0, 1, 2, 3,4 };
    //my_arr = { 0,1,2, };

    cout << my_arr[3] << endl;
    // std array���� ���� ���� at�̶�� ���� �� �� ����
    // �׷� ���� �迭�� �ٸ��� ����?
    // at�� ���� �迭�� ũ�Ⱑ �Ѿ�ٸ� ����ó���� ���ְ� �ȴ�.
    // ������ ����ó���� ���ָ� ���˻縦 �ѹ��� ���ְ� �Ǵ�
    // �ణ�� �ӵ����̰� �ְԵȴ�. �����ս��� ���� �߿��� ���α׷���
    // §�ٸ� ���� my_arr[x] �� ����Ѵ�.
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