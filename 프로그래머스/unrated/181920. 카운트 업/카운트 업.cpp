#include <string>
#include <vector>

// 카운트 업

using namespace std;

vector<int> solution(int start, int end)
{
    vector<int> answer;

    for (int i = start; i <= end; i++)
    {
        answer.push_back(i);
    }

    return answer;
}