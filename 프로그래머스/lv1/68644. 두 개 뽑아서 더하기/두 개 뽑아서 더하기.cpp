#include <string>
#include <vector>
#include <set>

// 두 개 뽑아서 더하기

using namespace std;

vector<int> solution(vector<int> numbers)
{
    vector<int> answer;
	set<int> s;

	for (int i = 0; i < numbers.size(); i++)
	{
		vector<int> temp;

		for (int j = i + 1; j < numbers.size(); j++)
		{
			s.insert(numbers[i] + numbers[j]);
		}
	}

	for (auto iter = s.begin(); iter != s.end(); iter++) 
	{
		answer.push_back(*iter);
	}

    return answer;
}