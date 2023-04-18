#include <string>
#include <iostream>
#include <stack>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> stk;
    for (const auto& i : s)
    {
        if (i == '(') stk.push('(');
        else if (i == ')')
        {
            if (!stk.empty()) 
            {
                stk.pop();
            }
            else 
            {
                stk.push(')');
            }
        }
    }
    if (!stk.empty())
    {
        answer = false;
    }

    return answer;
}