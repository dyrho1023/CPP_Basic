// 04_CPP_FileInOut_1.cpp

#include <iostream>     
/* Input Output Stream
 - cout : 포준 출력
 - cin  : 표준 입력
 - cerr : 표준 에러
*/

#include <cstdio>       // <stdio.h>

using namespace std;

int main()
{
    // <iostream>에서 제공하는 방법
    double math_score;
    cin >> math_score;

    cout << "math_score: " << math_score << std::endl;

    // <cstdio>에서 제공하는 방법
    int english_score;
    scanf("%d", &english_score);

    printf("english_score: %d\n", english_score);
}

/*
 1. Reference : 변수의 값 변경 가능
 2. Function Overloading : 서식 지정 없이 입출력 타입이 자동으로 적용됨
 
 - std::cout = std:ostream
 - std::cin  = std::istream
 - std::endl : 함수
*/


