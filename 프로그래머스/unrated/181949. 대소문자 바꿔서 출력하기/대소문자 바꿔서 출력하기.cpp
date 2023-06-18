#include <iostream>
#include <string>

// 대소문자 바꿔서 출력하기

using namespace std;

int main(void)
{
    string str;
	string answer;

    cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		// 대문자면 -> 소문자
		if (isupper(str[i]))
		{
			answer += tolower(str[i]);
		}
		// 소문자면 -> 대문자
		else
		{
			answer += toupper(str[i]);
		}
	}

	cout << answer;

    return 0;
}