// 02_CPP_namespave_2.cpp

/* namespace
 - using 지시어 : namespace에 정의된 함수를 간편하게 사용 하는 방법
   1) 특정 함수만 using 선언하여 사용 하는 방법 (Declaration)
   2) namespace 전체를 using 선언하여 사용 (Directive)
*/

#include <iostream>

// Subject_Math
namespace math 
{
    void MathScore() 
    {
        std::cout << "Math Score " << std::endl;
    }

    int CommonInfo()
    {
        return 0;
    }
}

// Subject_Korean
namespace korean
{
    void KoreanScore() 
    {
        std::cout << "Korean Score " << std::endl;
    }

    int CommonInfo()
    {
        return 0;
    }
}
// Subject_English
namespace english
{
    void EnglishScore()
    {
        std::cout << "English A Score" << std::endl;
    }

    int CommonInfo()
    {
        std::cout << "Class A" << std::endl;
        return 0;
    }
}

// 1) 특정 함수만 using 선언 (Delcaration)
using math::MathScore;

// 2) namespace 전체를 using 선언 (Directive) - 현업에서는 사용 금지
using namespace english;
using namespace korean;

int main()
{
    // 1) 특정 함수만 using 선언 
    MathScore();

    // 2) namespace 전체를 using 선언
    EnglishScore();

    // * korean의 english는 namespace 전체 using 선언
    // Commoninfo() -> Error 발생 : 자동으로 선택되어 호출되지 않음
    
    // CommonInfo();
}




