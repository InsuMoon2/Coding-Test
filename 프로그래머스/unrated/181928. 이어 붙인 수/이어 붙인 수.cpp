#include <string>
#include <vector>

// 이어 붙인 수

using namespace std;

int solution(vector<int> num_list)
{
    int answer = 0;
	string str_Hol = "";
	string str_JJack = "";

	for (int i = 0; i < num_list.size(); i++)
	{
		// 짝수
		if (num_list[i] % 2 == 0)
		{
			str_JJack += to_string(num_list[i]);
		}

		// 홀수
		else
		{
			str_Hol += to_string(num_list[i]);
		}
	}

	answer = stoi(str_JJack)  + stoi(str_Hol);

    return answer;
}