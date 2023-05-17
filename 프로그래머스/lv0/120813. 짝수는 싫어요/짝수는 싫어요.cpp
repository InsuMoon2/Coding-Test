#include <string>
#include <vector>

// 짝수는 싫어요

using namespace std;

vector<int> solution(int n)
{
    vector<int> answer;

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			answer.push_back(i);
		}
	}

    return answer;
}