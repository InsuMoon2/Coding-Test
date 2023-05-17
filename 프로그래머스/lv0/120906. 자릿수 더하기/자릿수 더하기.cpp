#include <string>
#include <vector>

// 자릿수 더하기

using namespace std;

int solution(int n)
{
    int answer = 0;
    string str = to_string(n);

    for (int i = 0; i < str.size(); i++)
    {
        answer += str[i] - '0';
    }

    return answer;
}