#include <iostream>

// 예상 대진표

using namespace std;

// 참가자 수 n, 참가자 번호 a, 경쟁자 번호 b
int solution(int n, int a, int b)
{
    int answer = 1;

    while (true)
    {
        if ((a + 1) / 2 == (b + 1) / 2) 
        {
            break;
        }

        a = (a + 1) / 2;
        b = (b + 1) / 2;

        answer++;
    }

    return answer;
}