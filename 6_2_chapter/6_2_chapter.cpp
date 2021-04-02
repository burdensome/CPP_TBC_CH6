#include <iostream>

using namespace std;

#define NUM_STUDENTS 100000

//void doSomething(int student_score[20])
//void doSomething(int student_score[])
void doSomething(int *student_score)
{
    // student_score -> 
    cout << (int)&student_score << endl;
    cout << (int)&student_score[0] << endl;
    cout << student_score[0] << endl;
    cout << student_score[1] << endl;
    cout << student_score[2] << endl;
    cout << sizeof(student_score) << endl;
}


int main()  
{
    const int num_students = 20;
    //cin >> num_students;    // runtime에 실행이 된다는 의미

    int students_scores[num_students]{ 1,2,3,4,5, };

    //cout << &students_scores << endl;

    /*cout << &students_scores[0] << endl;
    cout << &students_scores[1] << endl;
    cout << &students_scores[2] << endl;*/

    cout << (int)students_scores << endl;
    cout << (int)&students_scores << endl;
    cout << students_scores[0] << endl;
    cout << students_scores[1] << endl;
    cout << students_scores[2] << endl;

    doSomething(students_scores);
    
    //cout << sizeof(students_scores) << endl;

    return 0;
}