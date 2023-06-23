#include <string>
#include <vector>

using namespace std;

// 두 수의 연산값 비교하기

int compare(int a, int b)
{
	int result = 0;
	string str = to_string(a) + to_string(b);

    int value1 = stoi(str);
	int value2 = 2 * a * b;

	if (value1 > value2)
	{
        result =  value1;
	}

	else
	{
		result =  value2;
	}

	return result;
}

int solution(int a, int b)
{
    int answer = 0;

    answer = compare(a, b);

    return answer;
}