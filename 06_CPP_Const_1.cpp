// 06_CPP_Const_1.cpp

#include <iostream>     // Input Output Stream
using namespace std;

/* 1. const
 - 반드시 초기화가 필요
 - Compile time const : 상수에 접근시, 메모리 접근이 아님
 - Run time const : 상수에 접근하기 위해서, 메모리 사용
 - 한번 설정되면, 값을 바꿀 수 없음
*/

/* 2. constexpr
 - Compile time const로만 동작
*/

int main()
{
    // 1) const 인데, run time에 결정됨
    int runTimeConst;
    cin >> runTimeConst;
    cout << "Run Time Const : " << runTimeConst << endl << endl;


    // 2) const인데, compile time에 결정됨
    const int compileTimeConst = 20;
    // compileTimeConst = 20;   // Error

    // point의 주소 = compileTimeConst의 주소에 담긴 값
    int* point = (int*)&compileTimeConst;  // 이 떄 까지는 point는 compileTimeConst를 가리킴
    cout << "Value : " << *point << " Location : " << &point << endl << endl;
    *point = 200;   //point가 가리키는 값을 200으로 바꿔줄 때, 바꿀 수 있음 & 더이상 compileTimeConst를 가리키지 않음

    cout << "Value : " << compileTimeConst << " Location : " << &compileTimeConst << endl;
    cout << "Value : " << *point << " Location : " << &point << endl << endl;


    // constexpr 예제 : compile time에 반드시 결정됨   
    // compile time const와 용법은 동일
    constexpr int compileTimeConst_expr = 30;
    int* point_expr = (int*)&compileTimeConst_expr;

    *point_expr = 400;

    cout << "value : " << compileTimeConst_expr << " Location : " << &compileTimeConst_expr << endl;
    cout << "value : " << *point_expr << " Location : " << &point_expr << endl << endl;
}

