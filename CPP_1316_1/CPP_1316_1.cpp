/*
그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다.
예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.
단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.

첫째 줄에 단어의 개수 N이 들어온다. N은 100보다 작거나 같은 자연수이다. 둘째 줄부터 N개의 줄에 단어가 들어온다.
단어는 알파벳 소문자로만 되어있고 중복되지 않으며, 길이는 최대 100이다.

첫째 줄에 그룹 단어의 개수를 출력한다.
*/

#include <iostream>
using namespace std;

int main(void)
{
    int N; // 변수 선언
    cin >> N; // 사용자로부터 정수 입력받기
    int count = 0; // 결과를 저장해둘 변수 선언 및 초기화
    
    for(int i=0;i<N;i++) // i에 0부터 N이 되기 전까지 1씩 증가시킨 값을 대입하며 반복
    {
        int alpha[26]={0}; // alpha 배열 선언 및 0으로 초기화
        
        string s; // 문자열 변수 선언
        cin >> s; // 사용자로부터 문자열 입력받기
        
        int state = 1; // 상태를 확인할 변수 선언 및 초기화
        
        for(int j=0;s[j]!=NULL;j++) // j가 0부터 s[j]가 NULL이 아니라면 j를 1씩 증가시키며 계속 반복
        {
            if(alpha[(int)s[j]-97]!=0) // 만약, alpha[(int)s[j]-97]가 0이 아니라면(이미 나왔던 적이 있다는 의미)
            {
                if(s[j]==s[j-1]) // 만약, s[j]가 s[j-1]과 같다면(연속해서 나왔던 거라면)
                    continue; // 계속 반복
                else // s[j]가 s[j-1]과 같지 않다면(연속해서 나오지 않았다는 의미)
                {
                    state = 0; // state를 0으로 바꾸기
                    break; // 가장 가까운 반복문 빠져 나가기
                }
            }
            else // alpha[(int)s[j]-97]가 0이라면(이번이 처음으로 나왔다는 의미)
            {
                alpha[(int)s[j]-97]++; // alpha[(int)s[j]-97]의 값을 1 증가시키기
            }
        }
        
        if(state) // 만약, state가 1로 유지되었다면
            count++; // count에 1 더하기
    }
    
    cout << count; // 결과 출력하기
    return 0;
}
