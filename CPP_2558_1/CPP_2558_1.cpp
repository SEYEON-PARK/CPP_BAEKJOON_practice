/*
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

첫째 줄에 A, 둘째 줄에 B가 주어진다. (0 < A, B < 10)

첫째 줄에 A+B를 출력한다.
*/

#include <iostream>
using namespace std;

int main(void)
{
    int A, B; // 변수 선언
    cin >> A >> B; // 사용자로부터 정수 두 개 입력받기
    cout << A+B; // 결과 출력하기
    
    return 0;
}
