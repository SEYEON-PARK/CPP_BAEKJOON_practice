/*
총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.

첫째 줄에 정수의 개수 N(1 ≤ N ≤ 100)이 주어진다. 둘째 줄에는 정수가 공백으로 구분되어져있다.
셋째 줄에는 찾으려고 하는 정수 v가 주어진다. 입력으로 주어지는 정수와 v는 -100보다 크거나 같으며, 100보다 작거나 같다.

첫째 줄에 입력으로 주어진 N개의 정수 중에 v가 몇 개인지 출력한다.
*/

#include <iostream>
using namespace std;

int main(void)
{
    int N; // 변수 선언
    int num[100]; // 배열 선언
    int findNum, count=0; // 변수 선언 및 초기화
    
    cin >> N; // 사용자로부터 정수 입력받기
    
    for(int i=0;i<N;i++) // i가 0부터 N보다 작을 때까지 1씩 증가하며 반복
    {
        cin >> num[i]; // 사용자로부터 정수 입력받기
    }
    
    cin >> findNum; // 사용자로부터 정수(찾고자 하는 수) 입력받기
    
    for(int i=0;i<N;i++) // i가 0부터 N보다 작을 때까지 1씩 증가하며 반복
    {
        if(num[i]==findNum) // 만약, num[i]가 findNum과 같다면
            count++; // count에 1 더하기
    }
    
    cout << count; // 결과 출력하기
    
    return 0;
}
