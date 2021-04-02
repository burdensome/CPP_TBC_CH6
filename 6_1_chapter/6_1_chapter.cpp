#include <iostream>

using namespace std;

//struct Rectangle
//{
//    int length;
//    int width;
//};
//
//enum StudentName
//{
//    JACKJACK,   // = 0
//    DASH,       // = 1
//    VIOLET,     // = 2
//    NUM_STUDENTS,   // = 3
//};

#define NUM_STUDENTS 100000

int main()
{
    /*cout << sizeof(Rectangle) << endl;

    Rectangle rect_arr[10];

    cout << sizeof(rect_arr) << endl;

    rect_arr[0].length = 1;
    rect_arr[0].width = 2;*/

    //int my_array[] = { 1,2, 3,4,5};
    //int my_array[] { 1,2, 3,4,5 };  // uniform initializaion

    //cout << my_array[JACKJACK] << endl;
    //cout << my_array[DASH] << endl;
    //cout << my_array[VIOLET] << endl;
    //cout << my_array[3] << endl;
    //cout << my_array[4] << endl;

    //// Array는 compile time에 크기가 무조건 고정이 되어야한다.
    //int students_scores[NUM_STUDENTS];

    //students_scores[JACKJACK] = 0;
    //students_scores[DASH] = 100;

    const int num_students = 5;
    //cin >> num_students;    // runtime에 실행이 된다는 의미

    int students_scores[num_students];

    return 0;
}