#include <string>
#include <vector>

// 홀짝에 따라 다른 값 반환하기

using namespace std;

int solution(int n)
{
    int answer = 0;

    // 홀
    if (n % 2 == 1)
    {
	    for (int i = 1; i <= n; i += 2)
	    {
            answer += i;
	    }
    }

    // 짝
    else
    {
	    for (int i = 2; i <= n; i += 2)
	    {
            answer += (i * i);
	    }
    }

    return answer;
}