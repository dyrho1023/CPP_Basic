// 09_CPP_nullptr_1.cpp

#include <iostream>
using namespace std;


/* nullptr : null이 정수와 포인터 속성을 모두 가져 생기는 혼란을 방지하기 위해 사용 
 - 초기화에 사용되는 '0' 은 포인터 타입으로 암묵적 변환이 허용됨
 - NULL은 정수형으로 암묵적 변환되지는 않음 (C++11 이전에는 허용)
 - 이로 인해, NULL 과 '0' 을 이용한 초기화에 모호성 발생 
 - nullptr을 이용하여 null을 대체하여 이러한 모호성 제거
   1) nullptr은 bool 타입으로의 암묵적변환을 허용하긴 함
   2) 선언 자체를 bool로 하는 것은 안되지만, Fasle/True Check는 가능
*/ 

// Int Type Function
void Score(int score)
{
    cout << "int Type Function" << endl;
}

// Pointer Type Function
void Score(int* score)
{
    cout << "pointer Type Function" << endl;
}

int main()
{
    int* p1 = NULL;
    int* p2 = 0;
    int p3 = 0;
    // int p4 = NULL;  C++11 이상부터는 허용하지 않음

    int* p5 = nullptr;

    Score(p1);
    Score(p2);
    Score(p3);
    // Score(p4);   C++11 이상부터는 허용하지 않음

    Score(p5);

    // nullptr의 bool 형태 확인 방법 : p5 - 0 / !p5 - 1으로 출력 됨
    cout << p5 << " and " << !p5 << endl;
     
}
