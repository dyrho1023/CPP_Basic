// 09_CPP_Function_1.cpp

#include <iostream>
using namespace std;


/* 기본 파라미터 
 - 함수 선언시에 함수에 전달되는 인자가 없는 경우, 기본으로 설정되는 초기화 값

   1) 뒤에서 앞으로 오는 순으로 지정 가능 & 순차적인 지정만 가능
   2) 파라미터의 기본값은 함수 선언부분에 작성되어야 함
*/ 

int Averaging(int math, int english, int korean = 50, int science = 50)
{
    cout << (math + english + korean + science)/4 << endl;
}

int main()
{
    // math와 english에 초기화 선언된 값이 없으므로, 전달 인자가 모자라면 Error 발생
    // Averaging();
    // Averaging(100);

    Averaging(100, 100);            // = Averaging(100, 100, 50, 50)
    Averaging(100, 100, 100 , 100); // = Averaging(100, 100, 100, 100) 
}
