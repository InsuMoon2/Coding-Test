#include <string>
#include <vector>

// 공백으로 구분하기2

using namespace std;

vector<string> solution(string my_string)
{
    vector<string> answer;
	string str = "";

	for (int i = 0; i < my_string.size(); i++)
	{
		if (my_string[i] != ' ')
		{
			str += my_string[i];
		}

		else
		{
			if (!str.empty())
			{
				answer.push_back(str);
				str = "";
			}
		}
	}

    if (!str.empty())
    {
		answer.push_back(str);
    }

    return answer;
}