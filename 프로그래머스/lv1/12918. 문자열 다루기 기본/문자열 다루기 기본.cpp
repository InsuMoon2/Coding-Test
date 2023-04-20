#include <iostream>
#include <string>
#include <vector>

// 문자열 다루기 기본

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int size = s.size();

    if (size != 4 && size != 6)
        return false;

    for (int i = 0; i < size; i++)
    {
        if (s[i] < '0' || s[i] > '9')
            return false;
    }

    return true;
}

int main()
{

    string s;
    cin >> s;
    solution(s);

    return 0;
}