#include <string>
#include <vector>
#include <iostream>

// 문자열 섞기

using namespace std;

string solution(string str1, string str2)
{
    string answer = "";
    int size = str1.size();

    for (int i = 0; i < size; i++)
    {
         answer += str1[i];
         answer += str2[i];
    }

    cout << answer;

    return answer;
}