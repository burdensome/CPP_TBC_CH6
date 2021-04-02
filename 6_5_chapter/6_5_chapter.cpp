#include <iostream>

using namespace std;

int main()
{
    const int num_rows = 3;
    const int num_columns = 5;
    /*
    for (int row = 0; row < num);*/

    int array[][num_columns] =
    {
        {1,2,},        // row 0
        {6,7,8,9,10},       // row1
        {11, 12, 13, 14, 15} // row2
    };

    for (int row = 0; row < num_rows; ++row)
    {
        for (int col = 0; col < num_columns; ++col)
            cout << array[row][col] << '\t';

        cout << endl;
    }

    return 0;
}