#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

// 주사위 게임 2

using namespace std;

int solution(int a, int b, int c)
{
    int answer = 0;

    // 다 같으면
    if (a == b && b == c)
    {
        answer = (a + b + c) * ((pow(a, 2) + pow(b, 2) + pow(c, 2)) * ((pow(a, 3) + pow(b, 3) + pow(c, 3))));
    }

    // 두개만 다르면
    else if (a == b || b == c || a == c)
    {
        answer = (a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2));
    }

    // 세 숫자가 모두 다르다면
    else if (a != b && b != c && a != c)
    {
        answer = a + b + c;
    }

    cout << answer;

    return answer;
}

int main()
{
    int a = 4, b = 4, c = 4;

    solution(a, b, c);


    return 0;
}