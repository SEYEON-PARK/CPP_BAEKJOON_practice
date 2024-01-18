/*
단어 S와 정수 i가 주어졌을 때, S의 i번째 글자를 출력하는 프로그램을 작성하시오.

첫째 줄에 영어 소문자와 대문자로만 이루어진 단어 S가 주어진다. 단어의 길이는 최대 1,000이다.
둘째 줄에 정수 i가 주어진다. (1 <= i <= |S|)

S의 i번째 글자를 출력한다.
*/

#include <iostream>
using namespace std;

int main(void)
{
    string s; // 변수 선언
    cin >> s; // 사용자로부터 문자열 입력받기
    
    int index; // 변수 선언
    cin >> index; // 사용자로부터 정수 입력받기
    
    cout << s[index-1];
    
    return 0;
}
