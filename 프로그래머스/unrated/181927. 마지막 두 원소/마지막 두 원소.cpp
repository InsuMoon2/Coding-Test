#include <string>
#include <vector>

// 마지막 두 원소

using namespace std;

vector<int> solution(vector<int> num_list)
{
    vector<int> answer;
    int size = num_list.size();
	answer = num_list;

    for (int i = size - 1; i > size - 2; i--)
    {
	    if (num_list[i] > num_list[i - 1])
	    {
			answer.push_back(num_list[i] - num_list[i - 1]);
	    }

	    else
	    {
			answer.push_back(num_list[i] * 2);
	    }
    }

    return answer;
}