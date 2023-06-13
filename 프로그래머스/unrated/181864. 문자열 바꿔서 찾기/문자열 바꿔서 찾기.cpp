#include <string>
#include <vector>

// 문자열 바꿔서 찾기

using namespace std;

int solution(string myString, string pat)
{
    int answer = 1;
    string str = "";

    for (int i = 0; i < myString.size(); i++)
    {
	    if (myString[i] == 'A')
	    {
			str += 'B';
	    }

	    else if (myString[i] == 'B')
	    {
			str += 'A';
	    }
    }

    if (str.find(pat) == string::npos)
    {
		answer = 0;
    }

    return answer;
}