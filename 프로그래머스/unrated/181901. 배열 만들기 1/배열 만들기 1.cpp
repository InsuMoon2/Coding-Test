#include <algorithm>
#include <string>
#include <vector>

// 배열 만들기 1

using namespace std;

vector<int> solution(int n, int k)
{
    vector<int> answer;

	for (int i = 1; i <= n; i++)
	{
		// k의 배수이면, 
		if (i % k == 0)
		{
			answer.push_back(i);
		}
	}

	sort(answer.begin(), answer.end());

    return answer;
}