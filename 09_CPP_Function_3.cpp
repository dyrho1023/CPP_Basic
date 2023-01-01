// 09_CPP_Function_3.cpp

#include <iostream>
using namespace std;

/* 매크로 함수
 - 함수 호출시 발생하는 부하를 줄이기 위해서 사용

   1) 우선순위 : 인자를 괄호로 묶어 주어야 함
   2) 전위, 후위 연산의 경우, 생각과 다르게 동작하기도 함 
*/ 
#define PLUS(a, b) ((a) + (b))

int Plus(int x, int y) 
{ 
    return x + y;
}

int main()
{
    int x = 10;
    int y = 20;

    cout << Plus(x, y) << endl;
    cout << PLUS(x, y) << endl;

    cout << PLUS(x+y, y) << endl;
    // (x+y) + y 로 동작1
    cout << PLUS(++x, y) << endl;
    // (++x) + y 로 동작
    cout << x << endl;

}
