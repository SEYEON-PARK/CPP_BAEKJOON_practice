/*
입력 받은 대로 출력하는 프로그램을 작성하시오.

입력이 주어진다. 입력은 최대 100줄로 이루어져 있고, 알파벳 소문자, 대문자, 공백, 숫자로만 이루어져 있다.
각 줄은 100글자를 넘지 않으며, 빈 줄이 주어질 수도 있고, 각 줄의 앞 뒤에 공백이 있을 수도 있다.

입력받은 그대로 출력한다.
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string s; // 변수 선언
    while(getline(cin, s)) // cin을 이용하여 개행 문자(줄바꿈 문자) 전까지 입력받아 s에 저장하고, 만약 입력된 게 없다면 반복문 빠져 나가기!  
    {
        cout << s << '\n';
    }
    
    return 0;
}
