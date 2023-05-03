#include <string>
#include <vector>

// 크기가 작은 부분 문자열

using namespace std;

int solution(string t, string p)
{
    int answer = 0;
    int pLen = p.length();
    int tLen = t.size() - pLen + 1;

    for (int i = 0; i < tLen; i++)
    {
        string temp = t.substr(i, pLen);

        if (temp <= p)
        {
            answer++;
        }
    }

    return answer;
}