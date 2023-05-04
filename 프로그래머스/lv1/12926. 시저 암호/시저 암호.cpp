#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

// 시저암호

using namespace std;

string solution(string s, int n)
{
    string answer = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            answer += ' ';
            continue;
        }

        // A ~ Z 까지
        if ('A' <= s[i] && s[i] <= 'Z')
        {
            answer += (s[i] - 'A' + n) % 26 + 'A';
        }

        // 소문자면
        else if ('a' <= s[i] && s[i] <= 'z')
        {
            answer += (s[i] - 'a' + n) % 26 + 'a';
        }
	    
    }
    

    return answer;
}