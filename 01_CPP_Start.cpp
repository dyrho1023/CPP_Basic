// 01_CPP_Start.cpp

/* 사용한 Compiler
 - GNU C/C++ Compiler (GCC) 
   gcc / g++
*/

/* C++ 표준
 - C++98/03 => 1.0
 - C++11/14 => 2.0 : Modern C++
 - C++17/20 => 3.0
*/

/* C++ 표준 입출력 헤더
   C++은 xxx.h 형태가 아닌, xxx 형태
   입력 : cin 
   출력 : cout
   에러 : cerr
 */
#include <iostream>

const int State ;

/* #if 지시문 
 - #if 지시문은 #elif, #else 및 #endif 지시문을 사용하여 소스 파일의 일부 컴파일을 제어. 
   #if 이 0이 아닌 값이 있는 경우 #if 지시문 바로 뒤 부터 #endif 전의 코드는 컴파일 됨.
   #if + 상수 or #if + "조건부 컴파일 기호" 기호를 미리 지정해야지만 사용 가능
*/

#if 1
int main()
{
    std::cout << "Hello! New c++ World!" << std::endl;
}
#endif
