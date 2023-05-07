#include <string>
#include <vector>

// 문자열 앞의 n글자

using namespace std;

string solution(string my_string, int n)
{
    string answer = "";
    answer = my_string.substr(0, n);

    return answer;
}