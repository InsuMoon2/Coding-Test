#include <string>
#include <vector>

// 더 크게 합치기

using namespace std;

int solution(int a, int b)
{
    int answer = 0;
    string str1, str2;
    string result1, result2;

    str1 = to_string(a);
    str2 = to_string(b);

    answer = max((stoi(str1 + str2)), stoi((str2 + str1)));

    return answer;
}