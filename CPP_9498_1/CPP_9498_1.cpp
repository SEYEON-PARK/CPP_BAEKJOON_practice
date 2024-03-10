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
    
    if(score >= 90) // 만약, score이 90 이상이라면
        cout << "A"; // "A" 출력하기
    else if(score >= 80) // 만약 score이 90보다 작고, 80 이상이라면
        cout << "B"; // "B" 출력하기
    else if(score >= 70) // 만약 score이 80보다 작고, 70 이상이라면
        cout << "C"; // "C" 출력하기
    else if(score >= 60) // 만약 score이 70보다 작고, 60 이상이라면
        cout << "D"; // "D" 출력하기
    else // score이 60보다 작다면
        cout << "F"; // "F" 출력하기
    
    return 0;
}
