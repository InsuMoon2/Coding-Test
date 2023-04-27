#include <iostream>
#include <string>

using namespace std;

int solution(int n)
{
    int answer = 0;
    string str;
    str = to_string(n);

    for (int i = 0; i < str.size(); i++)
    {
        answer += str[i] - '0';
    }

    return answer;
}