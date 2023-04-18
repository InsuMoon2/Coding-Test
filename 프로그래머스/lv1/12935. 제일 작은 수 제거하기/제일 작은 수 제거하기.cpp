#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer = arr;

    if (answer.size() == 1)
    {
        answer.clear();
        answer.push_back(-1);
        return answer;
    }

    answer.erase(min_element(answer.begin(), answer.end()));

    return answer;
}