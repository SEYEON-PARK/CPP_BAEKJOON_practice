/*
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

첫째 줄에 테스트 케이스의 개수 T가 주어진다.
각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

각 테스트 케이스마다 A+B를 출력한다.
*/

#include <iostream>
using namespace std;

int main(void)
{
    int T, A, B; // 변수 선언
    cin >> T; // 사용자로부터 정수 입력받기
    
    for (int i=0;i<T;i++) // i가 0부터 T가 되기 전까지 1씩 증가시키며 반복
    {
        cin >> A >> B; // 사용자로부터 두 개의 정수 입력받기
        cout << A+B << '\n'; // 결과 출력하기
    }
    
    return 0;
}
