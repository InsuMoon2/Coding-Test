#include <string>
#include <vector>
#include <unordered_map>

// 숫자 문자열과 영단어

using namespace std;

int solution(string s)
{
	string answer;
	int size = s.size();
	

	unordered_map<string, int> Map = 
    {
		{"zero", 0}, {"one", 1}, {"two", 2},   {"three", 3}, {"four", 4},
        {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}
	};

	string str = "";
    for (int i = 0; i < size; i++)
    {
        // 숫자면
	    if (isdigit(s[i]))
	    {
			answer += s[i];
	    }

        // 문자열이면
	    else
	    {
			str += s[i];
	    }

		// Map에서 str 문자열을 찾으면
        if (Map.find(str) != Map.end())
        {
			answer += to_string(Map[str]);
			str = "";
        }
    }

    return stoi(answer);
}