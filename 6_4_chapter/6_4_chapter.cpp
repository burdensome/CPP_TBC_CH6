#include <iostream>

using namespace std;

void printArray(const int array[], const int length)
{
    for (int index = 0; index < length; ++index)
    {
        cout << array[index] << " ";
    }
    cout << endl;
}

int main()
{
    /*        value   index
    3 5 2 1 4   3       0       
    1 5 2 3 4   5       2         
    1 2 5 3 4   5       3
    1 2 3 5 4
    1 2 3 4 5
*/

    const int length = 5;
    int array[length]{ 3, 5, 2, 1, 4 };
    printArray(array, length);

    for (int startIndex = 0; startIndex < length - 1; ++startIndex)
    {
        // swap을 하기 전에 바꿔줄 index만 찾으면 된다!
        int smallestIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
        {
            if (array[smallestIndex] > array[currentIndex])
            {
                smallestIndex = currentIndex;
            }
        }


        // swap two values in the array
        // std::swap(array[smallestIndex], array[startIndex]);
        {
            int temp = array[smallestIndex];
            array[smallestIndex] = array[startIndex];
            array[startIndex] = temp;
        }

        printArray(array, length);
    }

    printArray(array, length);
    return 0;
}