#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> strArr)
{
    vector<string> answer;

    for (int i = 0; i < strArr.size(); i++)
    {
        if (i % 2 == 0)
        {
            string str = "";
            for (char c : strArr[i])
                str += tolower(c);
            answer.push_back(str);
        }

        else
        {
            string str = "";
            for (char c : strArr[i])
                str += toupper(c);
            answer.push_back(str);
        }
    }

    return answer;
}