#include <iostream>
#include <string>
#include <vector>

// A 강조하기

using namespace std;

string solution(string myString)
{
    string answer = "";
    int size = myString.size();

    for (int i = 0; i < size; i++)
    {
	    if (!isdigit(myString[i]))
	    {
			if (myString[i] == 'a' || myString[i] == 'A')
			{
				answer += toupper(myString[i]);
			}

			else
			{
				answer += tolower(myString[i]);
			}
	    }
    }

    return answer;
}

int main()
{
	string str = "AaaaAAAAaaaaanaana aa a aaAA aa";

	cout << solution(str) << endl;

	return 0;
}