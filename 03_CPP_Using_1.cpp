// 03_using.cpp

#include <iostream>
using namespace std;

/* using
 - namespace의 지시어 
 - Type aliasing을 가능케 함 : 기존 타입에 별칭 부여하는 개념
   1) 복잡한 타입을 표현할 때 직관적임
   2) Template에 대해 타입 별칭을 만들 수 있음
 - typedef 를 사용하는 것보다 좀 더 직관적 (typedef는 별칭 불가)
*/

using scoreArray  = int[3];               // 점수가 포함 될 Array
using scoreSet_1 = int (*)(int, int);     // 두 가지 점수 set에 대한 포인터

// typedef int scoreArray[3];
// typedef int (*FP)(int, int);

int Summation(int subject1, int subject2)
{
    return subject1 + subject2;
}

int main()
{
    scoreArray student1 = {50, 60, 70}; // int sutudent[3] = {50, 60, 70}
    scoreSet_1 set1 = &Summation;       // int (*)(int , int) 형태를 가지는 set1이
                                        // Summation 함수를 참조함 
                                        // 선언된 함수를 다른 이름으로 사용가능케 함

    cout << set1(10, 20) << endl;

    scoreArray* student1_clone;
    student1_clone = &student1;
    
    cout << student1[1] << endl;
    cout << *student1_clone[0] << endl;
}