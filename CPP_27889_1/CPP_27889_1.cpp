/*
GEC에는 여러 학교가 있다. 각 학교의 약칭과 정식 명칭은 다음과 같다.
  -NLCS: North London Collegiate School
  -BHA: Branksome Hall Asia
  -KIS: Korea International School
  -SJA: St. Johnsbury Academy
학교 이름을 좋아하는 규빈이는, 학교 이름을 짧게 부르는 것을 싫어하기 때문에, 각 학교의 약칭이 주어졌을 때 정식 명칭을 출력하는 프로그램을 만들기로 하였다.
각 학교의 약칭이 주어졌을 때, 정식 명칭을 출력하는 프로그램을 작성하시오.

첫 번째 줄에 학교의 약칭 중 하나가 주어진다.

첫 번째 줄에 입력된 학교의 정식 명칭을 출력한다.
*/

#include <iostream>
using namespace std;

int main(void)
{
    string shortString; // 변수 선언
    cin >> shortString; // 사용자로부터 문자열 입력받기
    
    if(shortString == "NLCS") // 만약, shortString이 "NLCS"와 같다면
    {
        cout << "North London Collegiate School"; // "North London Collegiate School" 출력하기
    }
    else if(shortString == "BHA") // 만약, shortString이 "NLCS"가 아니고, "BHA"와 같다면
    {
        cout << "Branksome Hall Asia"; // "Branksome Hall Asia" 출력하기
    }
    else if(shortString == "KIS") // 만약, shortString이"NLCS"가 아니고, "BHA"도 아니고 "KIS"와 같다면
    {
        cout << "Korea International School"; // "Korea International School" 출력하기
    }
    else // shortString이"NLCS"가 아니고, "BHA"도 아니고, "KIS"도 아니라면
    {
        cout << "St. Johnsbury Academy"; 
    }
    
    return 0;
}
