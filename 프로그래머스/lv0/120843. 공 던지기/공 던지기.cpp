#include <string>
#include <vector>
#include <iostream>

// 공 던지기

using namespace std;

int solution(vector<int> numbers, int k)
{
    int answer = 1;

	for (int i = 0; i < k - 1; i++)
	{
		answer += 2;

		if (answer > numbers.size())
		{
			answer -= numbers.size();
		}

	}

	cout << answer;

    return answer;
}