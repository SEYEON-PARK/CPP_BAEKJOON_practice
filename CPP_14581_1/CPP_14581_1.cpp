/*
홍준은 참 팬이 많다. 이를 본 구사과는 BOJ 슬랙에서 이모티콘을 만들었다.
선풍기 모양의 이모티콘은 :fan: 이고, 홍준의 이모티콘은 :(홍준의 아이디): 이다.
홍준의 아이디가 주어지면 구사과가 만든 이모티콘을 출력하는 프로그램을 작성하여라. 자세한 출력 방식은 입출력 형식을 참고하면 된다.

첫 번째 줄에 홍준의 아이디를 입력받는다. 홍준의 아이디는 길이가 20 이하인 문자열이며, 알파벳 소문자, 알파벳 대문자, 숫자로만 이루어졌다.

3개의 줄에 걸쳐, 팬들에게 둘러싸인 홍준의 모습을 출력한다.
*/

#include <iostream>
using namespace std;

int main(void)
{
    string s;
    cin >> s;
    
    cout << ":fan::fan::fan:" << endl;
    cout << ":fan::" << s << "::fan:" << endl;
    cout << ":fan::fan::fan:" << endl;
    
    return 0;
}
