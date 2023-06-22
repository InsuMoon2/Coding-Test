#include <string>
#include <vector>
#include "iostream"

// 외계행성의 나이

using namespace std;

string solution(int age)
{
    string answer = "";
    string str = to_string(age);

    for (int i = 0; i < str.size(); i++)
    {
        answer += str[i] + 49;
    }

    cout << answer;

    return answer;
}

int main()
{
    int age = 23;
    solution(age);

    return 0;
}