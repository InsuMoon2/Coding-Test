#include <string>
#include <vector>

// 등차수열의 특정한 항만 더하기

using namespace std;

int solution(int a, int d, vector<bool> included)
{
    int answer = 0;

    for (int i = 0; i < included.size(); i++)
    {
	    if (included[i] == true)
	    {
			answer += (a + (d * i));
	    }
    }

    return answer;
}