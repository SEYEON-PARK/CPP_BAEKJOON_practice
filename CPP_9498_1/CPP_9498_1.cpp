/*
시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.

첫째 줄에 시험 점수가 주어진다. 시험 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.

시험 성적을 출력한다.
*/

#include <iostream>
using namespace std;

int main(void)
{
    int score; // 변수 선언
    cin >> score; // 사용자로부터 정수 입력받기
    
    if(score >= 90)
        cout << "A";
    else if(score >= 80)
        cout << "B";
    else if(score >= 70)
        cout << "C";
    else if(score >= 60)
        cout << "D";
    else
        cout << "F";
    
    return 0;
}
