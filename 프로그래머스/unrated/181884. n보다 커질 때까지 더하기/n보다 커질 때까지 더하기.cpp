#include <string>
#include <vector>

// n보다 커질 때까지 더하기

using namespace std;

int solution(vector<int> numbers, int n)
{
    int answer = 0;

    for (int i = 0; i < numbers.size(); i++)
    {
        if (answer <= n)
        {
            answer += numbers[i];
            
        }

        else
        {
            return answer;
        }
    }
}