// 02_CPP_namespave_3.cpp

// C++ 표준의 헤더는 확장자가 없는 경우가 많음
#include <iostream>
#include <cstring>
#include <cstdlib>

#include <cstdio>
/* cstdio는 stdio.h를 std로 namespace 이용한 형태임
namespace std {
#include <stdio.h> } 
*/

int main()
{
    std::printf("Hello World!\n");
}
