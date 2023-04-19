#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

// 문자열 내림차순으로 배치하기

using namespace std;

string solution(string s)
{
    string answer = s;

	sort(answer.begin(), answer.end(), greater<>());

    return answer;
}