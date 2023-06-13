#include <string>
#include <vector>

// 대문자와 소문자

using namespace std;

string solution(string my_string)
{
    string answer = "";

    for (int i = 0; i < my_string.size(); i++)
    {
        if (isupper(my_string[i]))
            answer += tolower(my_string[i]);
        else
            answer += toupper(my_string[i]);
    }

    return answer;
}