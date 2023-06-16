#include <iostream>
#include <string>
#include <vector>

// I로 만들기

using namespace std;

string solution(string myString)
{
    string answer = "";

    for (int i = 0; i < myString.size(); i++)
    {
		// I보다 작으면
		if (myString[i] - '0' < 'l' - '0')
		{
			answer += "l";
		}

	    else
	    {
			answer += myString[i];
	    }
    }

    return answer;
}

int main()
{
	string str = "abcdevwxyz";

	cout << solution(str) << endl;

	return 0;
}