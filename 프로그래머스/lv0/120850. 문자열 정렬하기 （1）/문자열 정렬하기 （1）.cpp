#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

// 문자열 정렬하기 (1)

using namespace std;

vector<int> solution(string my_string)
{
    vector<int> answer;
	vector<string> str_vec;

	for (int i = 0; i < my_string.size(); i++)
	{
		if (isdigit(my_string[i]))
		{
			answer.push_back(my_string[i] - '0');
		}
	}

	sort(answer.begin(), answer.end());

	for (auto asdf : answer)
	{
		cout << asdf << endl;
	}

    return answer;
}

int main()
{
	string str = "hi12392";

	solution(str);


	return 0;
}