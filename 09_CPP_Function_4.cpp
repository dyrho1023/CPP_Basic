// 09_CPP_Function_4.cpp

#include <iostream>
using namespace std;

/* Inline 함수
   1) 함수 호출시 발생하는 부하를 줄이기 위해서 사용
   2) 함수를 호출하는 개념이 아니라, 함수를 기계어로 바로 치환하는 개념 
   - 매크로 함수의 부작용이 없음
   - 함수가 코드 메모리상에 존재할 필요가 없으면, 아예 사라짐
   3) 컴파일러에 최적화된 문법 -> 무조건 수행되지는 않음
   4) 구현이 복잡하다면, 코드 메모리 사용량이 증가 할 수도 있음
   - 간단한 구현에 대해서만 사용할 것
*/ 

inline int add(int x, int y) {return x + y;}

int main()
{
    int x = 10;
    int y = 20;

    cout << add(x, y) << endl;
    cout << add(x++, ++y) << endl;
}