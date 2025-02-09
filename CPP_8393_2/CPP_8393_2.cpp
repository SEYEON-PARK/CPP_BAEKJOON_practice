/*
n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.

1부터 n까지 합을 출력한다.
*/

#include <iostream>
using namespace std;

int main(void)
{
    int n, sum=0; // 변수 선언 및 초기화
    cin >> n; // 사용자로부터 정수 입력받기
    
    for(int i=1;i<=n;i++) // i가 1부터 n이 될 때까지 1씩 증가시키며 반복
    {
        sum+=i; // sum에 sum+i를 대입하기
    }
    
    cout << sum; // 결과(1부터 n까지의 합) 출력하기
    
    return 0;
}
