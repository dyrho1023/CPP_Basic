// 04_CPP_FileInOut_2.cpp

#include <iostream>     // Input Output Stream
using namespace std;


/* iomanip
 - 입출력에 대하여 세밀한 조정을 하고 싶을 떄 사용
 - C++11 부터 2진수 상수 작성 가능 => 작은 따옴표를 이용하여 가독성 확보
*/

#include <iomanip>      

int main()
{
    int sample1 = 0xCAFE;
    int sample2 = 0b1100'1010'1111'1110;
    
    printf("%x\n", sample1);
    printf("%d\n", sample1);
    printf("%X\n", sample1);
    printf("%10d\n", sample1);
    printf("%010d\n\n", sample1);
    
    // IO 조정자 / 조작자(manipulator)
    cout << hex << sample2 << endl;
    cout << dec << sample2 << endl;
    cout << hex << uppercase << sample2 << endl;

    cout << setw(10) << dec << sample2 << endl; // setw : 자리수 설정
    cout << setw(10) << setfill('0') << dec << sample2 << endl; // setfill : 빈공간 설정
}


