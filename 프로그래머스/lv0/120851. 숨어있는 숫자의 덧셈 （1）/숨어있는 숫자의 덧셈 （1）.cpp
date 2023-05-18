#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

// 숨어있는 숫자의 덧셈 (1)

using namespace std;

int solution(string my_string)
{
    int answer = 0;

    for (int i = 0; i < my_string.size(); i++)
    {
	    if (isdigit(my_string[i]))
	    {
            answer += my_string[i] - '0';
	    }
    }

    return answer;
}

int main()
{
    string str = {"aAb1B2cC34oOp"};
    //cin >> str;

    cout << solution(str) << endl;

    return 0;
}