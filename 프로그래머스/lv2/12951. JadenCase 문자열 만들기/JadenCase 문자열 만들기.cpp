#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    string answer = "";
    bool isChecking = true;

    for (int i = 0; i < s.size(); i++)
    {
	    if(isChecking)
	    {
            answer += toupper(s[i]);
            isChecking = false;
	    }

        // 첫문자가 아니면?
	    else
	    {
            answer += tolower(s[i]);
	    }

	    if (s[i] == ' ')
	    {
			isChecking = true;
	    }
    }

    return answer;
}