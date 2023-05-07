#include <string>
#include <vector>

// 문자열 뒤의 n글자

using namespace std;

string solution(string my_string, int n)
{
    string answer = "";
    int size = my_string.size() - n;

    for (int i = size; i < my_string.size(); i++)
    {
        answer += my_string[i];
    }

    return answer;
}