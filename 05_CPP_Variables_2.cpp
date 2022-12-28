// 05_CPP_Variables_2.cpp

#include <iostream>     // Input Output Stream

using namespace std;


int main()
{
// 1. auto : 오른쪽 항의 표현식에 대하여 Compile 시에 변수의 Type을 추측하여 할당
//    배열에는 사용할 수 없음 & 반드시 초기화 필요

    double x[3] = {1, 2, 3};
    
    auto n1 = x[0];
    auto p = x;
    auto n2 = 100;

// 2. decltype : 변수와 동일한 Type으로 설정
//    초기화 없이 사용 가능 & 정확한 Type으로 지정

    int n3 = 300;
    decltype(n3) n4;

// auto와 const 차이
    const int c_i = 100;
    auto auto_i = c_i;
    // auto_i는 int로 결정됨

    auto_i = 200; // OK : error 미 발생

    decltype(c_i) de_i = c_i;
    // de_i = const int 값
    // de_i = 200   // NG : error 발생 - const int 값에 새로운 값 할당 
}

