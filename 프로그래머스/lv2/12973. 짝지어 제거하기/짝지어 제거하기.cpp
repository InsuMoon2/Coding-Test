#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stack>

// 짝지어 제거하기

using namespace std;

int solution(string s)
{
    int answer = 0;

    stack<char> stk;
    
    for (int i = 0; i < s.size(); i++)
    {
	    if (stk.empty() || stk.top() != s[i])
	    {
            stk.push(s[i]);
	    }

        else if (stk.top() == s[i])
	    {
            stk.pop();
	    }
    }

    if (stk.empty())
    {
        return 1;
    }

    return answer;
}