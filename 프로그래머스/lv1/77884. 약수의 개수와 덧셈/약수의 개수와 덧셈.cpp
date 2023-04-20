#include <string>
#include <vector>

// 약수의 개수와 덧셈

using namespace std;

int division(int n)
{
	int count = 0;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}

	return count;
}

int solution(int left, int right)
{
	int answer = 0;

    for (int i = left; i <= right; i++)
    {
		int count = division(i);

		if (count % 2 == 0)
		{
			answer += i;
		}

		else
		{
			answer -= i;
		}
    }

    return answer;
}