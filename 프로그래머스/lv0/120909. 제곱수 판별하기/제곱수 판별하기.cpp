#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

// 제곱수 판별하기

using namespace std;

int solution(int n)
{
    int answer = 0;

    int sqrtN = sqrt(n);

    if (sqrtN * sqrtN == n)
    {
        answer = 1;
    }

    else
    {
        answer = 2;
    }

    return answer;
}