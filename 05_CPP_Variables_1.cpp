// 05_CPP_Variables_1.cpp

#include <iostream>     // Input Output Stream

using namespace std;

// 1. User Define Type
 enum Vehicle {
    State_Off,
    State_Acc,
    State_IG,
    State_On,
 };

 union Subject {
    char title;
    double average;
 };

// 2. 맴버 데이터 변수의 초기값 지정
struct Score {
    int english = 0;
    int math = 0;
};

/* C++ 에서 struct /union / enum 지정 생략 => Tag를 Type으로 취급 
   아래 코드와 main 안의 선언부분은 동일한 기능
 struct Score Jun;
 union Subject Class_A;
 enum Vehicle KONA;
*/
int main()
{
    Score Jin = {90, 80};
    // Score  Min = { .english = 80, .math = 90}; 

    Score Jun;
    cout << Jun.english << ", " << Jun.math << endl;

    Subject Class_A;
    Vehicle KONA;

    // Direct Initialization 지원
    int speed (100);
    int seat[3] {1,2,3};
    Score Jack {100, 100};

    // Uniform Initialization 지원 - 대괄호를 이용한 선언
    // Compile 시에 암묵적인 Type 벼환을 방지 할 수 있음
    // int Speed = {10} 

    // Error Case
    // double d_phi = 3.14
    // int n_phi_1 = d_phi (OK: Uniform Initialization 아니므로 Error 발생 X, Warning은 발생 가능)
    // int n_phi_2 = {d_phi} (NG: Type 변환 불가)

}
