#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// 부족한 금액 계산하기

long long solution(int price, int money, int count)
{
    long long answer = 0;

    for (int i = 1; i <= count; i++)
    {
        answer += price * i;
    }

    if (answer < money)
    {
        answer = 0;
    }

    else
    {
        answer = answer - money;
    }

    return answer;
}