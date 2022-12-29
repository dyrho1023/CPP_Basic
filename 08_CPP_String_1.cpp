// 08_CPP_String_1.cpp

#include <iostream>     // Input Output Stream
using namespace std;

#include <cstring>
#include <string>

/* 1.cstring
 - C의 문자열 string.h와 동일 : char[], const char*
 - 메모리 관리 필수
 - 널문자로 종료 : '\0'로 끝남
 - 문자열 연산에 대해서 함수 사용 필요
*/

/* 2. string
 - C++ 문자열 : std::string
*/

int main()
{
    // 1. cstring
    char str1[32] = "Good";
    const char* str2 = " Morning";

    char str3[32] = " Night";
    strcat(str1, str3);
    printf("%s\n", str1);


    // 2. string
    string s1 = "Nice";
    string s2 { "Nice" };

    cout << s1.size() << endl;

    if (s1 == s2)
    {
        cout << "Same Sentence" << endl;
    }
    string s3 = " Shoot!";
    
    s1 += s3;

    cout << s1 << endl;

}



