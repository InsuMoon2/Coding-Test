#include <string>
#include <vector>

using namespace std;

// 특정한 문자를 대문자로 바꾸기

string solution(string my_string, string alp)
{
    string answer = "";

    for (int i = 0; i < my_string.size(); i++)
    {
	    if (my_string[i] == alp[0])
	    {
            answer += my_string[i] - 32;
	    }

	    else
	    {
			answer += my_string[i];
	    }
    }

    return answer;
}