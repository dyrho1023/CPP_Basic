// 09_CPP_Function_5.cpp

#include <iostream>
using namespace std;

/* 함수 템플릿
   함수의 인자와 반환 타입만 다르고, 구현 내용은 동일한 경우
   -> 컴파일러가 자동으로 코드를 사용하는 기술 중 한 방법 : 템플릿 (Template)

   1) 사용자가 전달한 함수의 인자 타입을 통하여, 최종 함수 형태를 결정
   2) 컴파일 타임에 코드를 생성 -> 컴파일 시간은 증가
   3) 전달된 인자의 타입이 다양할 경우, 코드 메모리의 사용량이 증가 될 수 있음
*/ 

template <typename TYPE> // 타입 파라미터
inline TYPE add(TYPE x, TYPE y) 
{
    return x + y;
}

int main()
{
    // 암묵적 타입 지정 -> 컴파일러가 추론
    cout << add(10, 20) << endl;
    cout << add(10.0, 20.5) << endl;
    // cout << add(10, 20.5) << endl;  -> Error : int와 double 혼합 되어 type 결정 불가
    

    // 명시적 타입 지정
    double x = 10.0;
    signed char y = 20;

    cout << add<int>(x, y) << endl;     // int 형으로 명시함

}