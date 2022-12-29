// 09_CPP_Function_2.cpp

#include <iostream>
using namespace std;


/* 함수 오버로딩 : 동일한 이름의 함수를 만들 수 있음 -> 특정 조건을 만족하는 경우 
   1) 함수 인자의 갯수가 다르거나
   2) 함수 인자의 타입이 다른 경우
   * 함수의 반환 형태만 다르고 나머지가 전부 동일한 경우는 함수 오버로딩이 아님
   * C++ 에서 함수의 심볼을 결정하는 방식이 C와 다르기 때문에 가능한 방법
   * 인자가 모호하면 함수 호출에 모호성이 생겨 정상동작 하지 않음 -> 파라미터 기본값과 사용시 주의 요망
*/ 

// Standard Function
int Summation(int math, int english)
{
    cout << "Standard Function" << endl;
    cout << math + english << endl;
}

// 1) 함수 인자의 갯수가 다른 경우
int Summation(int math, int english, int korean)
{
    cout << "Case 1" << endl;
    cout << math + english + korean << endl;
}

// 2) 함수 인자의 타입이 다른 경우
double Summation(double math, double english)
{
    cout << "Case 2" << endl;
    cout << math + english << endl;
}

int main()
{
    Summation(20, 20);      // Standard 함수 호출
    Summation(10, 20 ,30);  // 인자가 3개인 경우
    // Summation(20, 20.5);    // double 대신 int형태로 인자 전달 시 Error 발생
    Summation(20.5, 20.5);  // 인자가 double type인 경우
}
