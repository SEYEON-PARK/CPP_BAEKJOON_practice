/*
n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.

1부터 n까지 합을 출력한다.
*/

#include <iostream>
using namespace std;

int main(void)
{
    int n, N, sum=0;
    cin >> n;
    N=n;
    
    for(int i=0;i<n;i++)
    {
        sum+=N--;
    }
    
    cout << sum;
    
    return 0;
}
