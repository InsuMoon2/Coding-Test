#include <algorithm>
#include <string>
#include <vector>

// 뒤에서 5등 위로

using namespace std;

vector<int> solution(vector<int> num_list)
{
    vector<int> answer;
    int size = num_list.size();

    sort(num_list.begin(), num_list.end());

    for (int i = 5; i < size; i++)
    {
        answer.push_back(num_list[i]);
    }

    return answer;
}