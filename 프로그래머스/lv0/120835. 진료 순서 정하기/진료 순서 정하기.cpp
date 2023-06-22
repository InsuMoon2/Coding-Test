#include <algorithm>
#include <string>
#include <vector>

// 진료 순서 정하기

using namespace std;

vector<int> solution(vector<int> emergency)
{
    vector<int> answer;
	vector<int> vec = emergency;

	sort(vec.begin(), vec.end(), greater<>());

	for (int i = 0; i < emergency.size(); i++)
	{
		for (int j = 0;  j < emergency.size(); j++)
		{
			if (emergency[i] == vec[j])
			{
				answer.push_back(j + 1);
			}
		}
	}

    return answer;
}