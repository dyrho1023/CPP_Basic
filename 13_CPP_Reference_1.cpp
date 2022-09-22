#include <iostream>
using namespace std;

/* Reference Variable
 - 기존 메모리에 새로운 별칭을 부여함
 - & 기호를 사용하는데, 메모리의 주소를 의미하는 것이 아닌 '참조'를 의미함
 - 선언과 동시에 초기화 필요 
 - 초기화 없이, null 값을 가질 수 없음
*/

int main()
{
    int mathSocre = 100;

    // 참조 변수 초기화
    int& math = mathSocre;

    // 여기서 & 기호는 주소를 반환하기 위해 사용
    cout << &mathSocre << endl;
    cout << &math << endl;

    // 참조 변수는 초기화 값이 없거나, nullptr를 가질 순 없음
    // int& english = nullptr;
    // int& english;

}