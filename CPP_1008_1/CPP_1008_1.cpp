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
    double A, B;
    cin >> A >> B;
    
    cout << fixed << setprecision(9);
    cout << A/B;
    
    return 0;
}
