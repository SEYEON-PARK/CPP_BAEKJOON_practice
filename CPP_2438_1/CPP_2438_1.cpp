/*
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
*/

#include <iostream>
using namespace std;

int main(void)
{
    int num; // 변수 선언
    cin >> num; // 사용자로부터 정수 입력받기
    
    for(int i=0;i<num;i++) // i가 0부터 num보다 작을 때까지 1씩 증가하며 반복
    {
        for(int j=0;j<=i;j++) // j가 0부터 i보다 작거나 같을 때까지 1씩 증가하며 반복
        {
            cout << '*'; // '*' 출력하기
        }
        cout << '\n'; // 한 줄 띄기
    }
    
    return 0;
}
