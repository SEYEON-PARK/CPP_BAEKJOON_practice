/*
흔한 수학 문제 중 하나는 주어진 점이 어느 사분면에 속하는지 알아내는 것이다. 사분면은 아래 그림처럼 1부터 4까지 번호를 갖는다. "Quadrant n"은 "제n사분면"이라는 뜻이다.
예를 들어, 좌표가 (12, 5)인 점 A는 x좌표와 y좌표가 모두 양수이므로 제1사분면에 속한다. 점 B는 x좌표가 음수이고 y좌표가 양수이므로 제2사분면에 속한다.
점의 좌표를 입력받아 그 점이 어느 사분면에 속하는지 알아내는 프로그램을 작성하시오. 단, x좌표와 y좌표는 모두 양수나 음수라고 가정한다.

첫 줄에는 정수 x가 주어진다. (−1000 ≤ x ≤ 1000; x ≠ 0) 다음 줄에는 정수 y가 주어진다. (−1000 ≤ y ≤ 1000; y ≠ 0)

점 (x, y)의 사분면 번호(1, 2, 3, 4 중 하나)를 출력한다.
*/

#include <iostream>
using namespace std;

int main(void)
{
    int x, y; // 변수 선언
    cin >> x; // 사용자로부터 정수(x 좌표) 입력받기
    cin >> y; // 사용자로부터 정수(y 좌표) 입력받기
    
    if(x>0) // 만약, x가 0보다 크다면
    {
        if(y>0) // 만약, y가 0보다 크다면
            cout << "1"; // "1" 출력하기
        else // y가 0보다 크지 않다면(작거나 같다면)
            cout << "4"; // "4" 출력하기
    }
    else // x가 0보다 크지 않다면(작거나 같다면)
    {
        if(y>0) // 만약, y가 0보다 크다면
            cout << "2"; // "2" 출력하기
        else // y가 0보다 크지 않다면(작거나 같다면)
            cout << "3"; // "3" 출력하기
    }
    
    return 0;
}
