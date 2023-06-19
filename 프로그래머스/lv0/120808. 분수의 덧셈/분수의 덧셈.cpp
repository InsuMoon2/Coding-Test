#include <string>
#include <vector>
#include <iostream>

// 분수의 덧셈

using namespace std;

// 최소 공약수
int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}

	else
	{
		return gcd(b, a % b);
	}
}

// 최대 공배수
int lcm(int a, int b)
{
	return a * (b / gcd(a, b));
}

// numer이 분자 denom이 분모
vector<int> solution(int numer1, int denom1, int numer2, int denom2)
{
	vector<int> answer;
	// 분모
	int a = denom1 * denom2;
	// 분자
	int b = numer1 * denom2 + numer2 * denom1;

	int gcd_value = gcd(a, b);

	if (denom2 % denom1 == 0)
	{
		a /= gcd_value;
		b /= gcd_value;

		answer.push_back(b);
		answer.push_back(a);
	}

	else
	{
		a /= gcd_value;
		b /= gcd_value;

		answer.push_back(b);
		answer.push_back(a);
	}

	cout << "LCM : " << b << '\n' << "GCD : " << a << endl;

	return answer;
}

int main()
{
	int a, b, c, d;
	solution(9, 2, 1, 3);


	return 0;
}
