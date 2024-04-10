/*
자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.

첫째 줄에 100,000보다 작거나 같은 자연수 N이 주어진다.

첫째 줄부터 N번째 줄 까지 차례대로 출력한다.
*/

#include <iostream>
using namespace std;

int main(void)
{
    int N; // 변수 선언
    cin >> N; // 사용자로부터 정수 입력받기
    
    for(int i=1;i<=N;i++) // i에 1부터 N보다 작거나 같을 때까지 1씩 증가시킨 값을 대입하며 반복
    {
        cout << i << '\n'; // 결과 출력하기
    }
    
    return 0;
}  
