/*
예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.
*/

#include <iostream>
using namespace std;

int main(void)
{
    int N, minus=3; // 변수 선언 및 초기화
    cin >> N; // 사용자로부터 정수 입력받기
    
    for(int i=0;i<2*N-1;i++)
    {
        if(i<=N-1)
        {
            for(int j=0;j<N-i-1;j++)
            {
                cout << ' ';
            }
            for(int k=0;k<2*(i+1)-1;k++)
            {
                cout << '*';
            }
            
            cout << '\n';
        }
        else
        {
            for(int j=0;j<i-N+1;j++)
            {
                cout << ' ';
            }
            for(int k=2*N-minus;k>0;k--)
            {
                cout << '*';
            }
            minus+=2;
            
            cout << '\n';
        }
        
        
    }
    
    return 0;
}
