#include <iostream>
#include <string>
#include <vector>

// 코드 처리하기

using namespace std;

string solution(string code)
{
	string answer = "";
	bool mode = false;

	for (int i = 0; i < code.size(); i++)
	{
		// 모드 변경
		//if (code[i] == '1')
		//{
		//	mode = !mode;
		//}

		if (mode == false)
		{
			if (code[i] != '1')
			{
				// 짝수
				if (i % 2 == 0)
				{
					answer += code[i];
				}
			}

			else if (code[i] == '1')
			{
				mode = true;
			}
		}

		else if (mode == true)
		{
			if (code[i] != '1')
			{
				// 홀수
				if(i % 2 == 1)
				{
					answer += code[i];
				}
			}

			else if (code[i] == '1')
			{
				mode = false;
			}
		}
    }

	if (answer.empty())
	{
		answer = "EMPTY";
	}

    return answer;
}

int main()
{
	string str = "abc1abc1abc";
	cout << solution(str) << endl;

	return 0;
}