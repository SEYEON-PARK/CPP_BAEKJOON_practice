/*
두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.'

첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)

첫째 줄에 A/B를 출력한다. 실제 정답과 출력값의 절대오차 또는 상대오차가 10의 -9승 이하이면 정답이다.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    double A, B; // 변수 선언 (정수이지만, double로 선언한 이유 : (정수 / 정수)는 결과도 정수일 수밖에 없기 때문에)
    cin >> A >> B; // 사용자로부터 두 개의 정수 입력받기
    
    cout << fixed << setprecision(9); // 소수점 이하 9자리까지 정확하게 표시함.
    cout << A/B; // 결과 출력하기
    
    return 0;
}
