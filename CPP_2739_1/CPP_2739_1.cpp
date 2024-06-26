/*
N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다.

첫째 줄에 N이 주어진다. N은 1보다 크거나 같고, 9보다 작거나 같다.

출력형식과 같게 N*1부터 N*9까지 출력한다.
*/

#include <iostream>
using namespace std;

int main(void)
{
    int N; // 변수 선언
    cin >> N; // 사용자로부터 정수 입력받기
    
    for(int i=1;i<=9;i++) // i가 1부터 9보다 작거나 같을 때까지 1씩 증가시키며 반복
    {
        cout << N << " * " << i << " = " << N*i << endl; // 결과 출력하기
    }
    
    return 0;
}
