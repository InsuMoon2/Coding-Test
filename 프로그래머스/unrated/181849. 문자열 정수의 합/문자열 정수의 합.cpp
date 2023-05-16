#include <iostream>
#include <string>
#include <vector>

// 문자열 정수의 합

using namespace std;

int solution(string num_str)
{
    int answer = 0;

    for (int i = 0; i < num_str.size(); i++)
    {
        answer += num_str[i] - '0';
    }

    return answer;
}

int main()
{
    string num_str;
    cin >> num_str;

    cout << solution(num_str) << endl;

    return 0;
}