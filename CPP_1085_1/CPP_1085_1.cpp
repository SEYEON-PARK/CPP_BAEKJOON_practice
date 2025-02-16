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
    int x, y, w, h, min;
    int r[4];
    
    cin >> x >> y >> w >> h;
    
    r[0]=x;
    r[1]=y;
    r[2]=w-x;
    r[3]=h-y;
    min=r[0];
    
    for(int i=0;i<4;i++)
    {
        if(r[i]<min)
            min=r[i];
    }
    
    cout << min;
    
    return 0;
}
