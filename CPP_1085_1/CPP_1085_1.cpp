/*
한수는 지금 (x, y)에 있다. 직사각형은 각 변이 좌표축에 평행하고, 왼쪽 아래 꼭짓점은 (0, 0), 오른쪽 위 꼭짓점은 (w, h)에 있다.
직사각형의 경계선까지 가는 거리의 최솟값을 구하는 프로그램을 작성하시오.

첫째 줄에 x, y, w, h가 주어진다.

첫째 줄에 문제의 정답을 출력한다.
*/

#include <iostream>
using namespace std;

int main(void)
{
    int x, y, w, h, min; // 변수 선언
    int r[4]; // 배열 선언
    
    cin >> x >> y >> w >> h; // 사용자로부터 네 개의 정수 입력받기

    // 배열에 각 정수 대입하기
    r[0]=x;
    r[1]=y;
    r[2]=w-x;
    r[3]=h-y;
    min=r[0];
    
    for(int i=0;i<4;i++) // i에 0부터 4가 되기 전까지 1씩 증가시킨 값을 대입하며 반복
    {
        if(r[i]<min) // 만약, r[i]가 min보다 작다면
            min=r[i]; // min에 r[i] 대입하기
    }
    
    cout << min; // 결과 출력하기
    
    return 0;
}
