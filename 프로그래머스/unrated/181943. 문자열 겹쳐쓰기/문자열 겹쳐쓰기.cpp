#include <string>
#include <vector>

// 문자열 겹쳐쓰기

using namespace std;

string solution(string my_string, string overwrite_string, int s)
{
    string answer = "";

    for (int i = 0; i < overwrite_string.size(); i++)
    {
        my_string[i + s] = overwrite_string[i];
    }

    answer = my_string;

    return answer;
}