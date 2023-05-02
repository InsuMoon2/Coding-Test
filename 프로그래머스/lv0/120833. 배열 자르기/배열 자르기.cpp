#include <string>
#include <vector>

// 배열 자르기

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2)
{
    vector<int> answer;

    for (int i = num1; i <= num2; i++)
    {
        answer.push_back(numbers[i]);
    }

    return answer;
}