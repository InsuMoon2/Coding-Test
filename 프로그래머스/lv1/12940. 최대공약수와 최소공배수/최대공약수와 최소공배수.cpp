#include <string>
#include <vector>

// 최대공약수와 최소공배수

using namespace std;

// 최대공약수
int gcd(int a, int b)
{
	if (b == 0)
		return a;

	else
	{
		return gcd(b, a % b);
	}
}

// 최소공약수
int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

vector<int> solution(int n, int m)
{
    vector<int> answer;

	answer.push_back(gcd(n, m));
	answer.push_back(lcm(n, m));

    return answer;
}