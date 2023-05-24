#include <string>
#include <vector>

// n개 간격의 원소들

using namespace std;

vector<int> solution(vector<int> num_list, int n)
{
    vector<int> answer;

    for (int i = 0; i < num_list.size(); i += n)
    {
        answer.push_back(num_list[i]);
    }

    return answer;
}

int main()
{
    return 0;
}