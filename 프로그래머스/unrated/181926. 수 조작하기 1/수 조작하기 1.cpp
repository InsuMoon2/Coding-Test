#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 수 조작하기 1

int solution(int n, string control)
{
    int answer = n;

    int size = control.size();
    for (int i = 0; i < size; i++)
    {
	    if (control[i] == 'w')
	    {
			answer += 1;
	    }

        else if (control[i] == 's')
	    {
			answer -= 1;
	    }

        else if (control[i] == 'd')
	    {
			answer += 10;
	    }

		else if (control[i] == 'a')
		{
			answer -= 10;
		}
    }
    return answer;
}

int main()
{
	int n = 0;
	string str = "wsdawsdassw";

	cout << solution(n, str);

	return 0;
}