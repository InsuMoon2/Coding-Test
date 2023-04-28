#include <string>
#include <vector>

// flag에 따라 다른 값 반환하기

using namespace std;

int solution(int a, int b, bool flag)
{
    int answer = a + b;

    if (!flag)
        answer = a - b;

    return answer;
}