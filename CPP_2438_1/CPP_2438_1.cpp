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
    
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
    
    return 0;
}
