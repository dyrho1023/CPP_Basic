// 07_CPP_Struct_1.cpp

#include <iostream>     // Input Output Stream
using namespace std;

struct Score {
    int math;
    int english;
    int korean;
};

int main()
{
    Score Jun {80, 90, 40};

    // 1. Structured Binding 선언 = 구조 분해 선언
    // C++ 17 문법이므로, Compile 시에 해당 버전 확인 필요
    // - 개수가 동일하고, 반드시 auto를 사용
    // - 배열에서도 사용 가능

    auto [math, english, korean] = Jun;
    
    cout << math << "," << english << "," << korean << endl;

    int arr[3] = {1, 2, 3};
    auto [a, b, c] = arr;

    cout << a << "," << b << "," << c << endl;

    // int math = Jun.math;
    // int english = Jun.english언
    // int korean = Jun.korean;

}