#include <string>
#include <vector>

// 3진법 뒤집기

using namespace std;

int solution(int n)
{
    int answer = 0;
    vector<int> vec;

    while (n > 0)
    {
        vec.push_back(n % 3);
        n /= 3;
    }

    int size = vec.size();
    int mul = 1;

    for (int i = size -1; i >= 0; i--)
    {
        answer += vec[i] * mul;
        mul *= 3;
    }

    return answer;
}