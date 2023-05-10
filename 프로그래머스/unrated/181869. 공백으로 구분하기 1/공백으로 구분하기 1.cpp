#include <sstream>
#include <string>
#include <vector>

// 공백으로 구분하기 1

using namespace std;

vector<string> solution(string my_string)
{
    vector<string> answer;
    string split;

    stringstream ss(my_string);

    // 공백으로 문자열 구분하기
    while (getline(ss, split, ' '))
    {
        answer.push_back(split);
    }

    return answer;
}