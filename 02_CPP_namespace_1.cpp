// 02_CPP_namespave_1.cpp

/* namespace
 - C++에는 개별 공간에서 이미 사용되었던 변수명이 사용 가능.
 - 이름 충돌을 방지 하기 위해서 naemspace를 설정하여 사용
 - 프로그램의 각 요소를 관련된 요소끼리 그룹화 가능 
*/

#include <iostream>

// Subject_Math
namespace math 
{
    void Score() 
    {
        std::cout << "Math Score" << std::endl;
    }
}

// Subject_English
namespace english
{
    void Score()
    {
        std::cout << "English Score" << std::endl;
    }
}

int main()
{
    // namespace안에 동일한 동작을 하는 "Score" 함수 
    math::Score();
    english::Score();
}