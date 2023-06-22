#include <iostream>
#include <string>
#include <vector>

// 구슬을 나누는 경우의 수

using namespace std;

int comb(int n, int r)
{
	if (r == 0 || n == r)
		return 1;

	else
		return comb(n - 1, r - 1) + comb(n - 1, r);
}

int factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}

	return n * factorial(n - 1);
}

int solution(int n, int m)
{
    int answer = 0;

	//answer = factorial(n) / (factorial(n - m) * factorial(m));
	answer = comb(n, m);

    return answer;
}