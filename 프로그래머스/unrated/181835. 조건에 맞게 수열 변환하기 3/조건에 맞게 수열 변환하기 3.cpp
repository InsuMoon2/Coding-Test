#include <string>
#include <vector>

// 조건에 맞게 수열 변환하기 3

using namespace std;

vector<int> solution(vector<int> arr, int k)
{
    vector<int> answer;

    for (int i = 0; i < arr.size(); i++)
    {
        // 짝수
        if (k % 2 == 0)
        {
            int result;
            result = arr[i] + k;
            answer.push_back(result);
        }

        // 홀수
        else
        {
            int result;
            result = arr[i] * k;
            answer.push_back(result);
        }
    }

    return answer;
}