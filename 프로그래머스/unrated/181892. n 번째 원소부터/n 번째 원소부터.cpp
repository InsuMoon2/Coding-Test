#include <string>
#include <vector>

// n번째 원소부터

using namespace std;

vector<int> solution(vector<int> num_list, int n)
{
    vector<int> answer;

    for (int i = n - 1; i < num_list.size(); i++)
    {
        answer.push_back(num_list[i]);
    }

    return answer;
}