#include <string>
#include <vector>

// 다음 큰 숫자

using namespace std;

int count(int n)
{
    int count = 0;

    while (n > 0)
    {
        if (n % 2 == 1)
        {
            count++;
        }

        n /= 2;
    }

    return count;
}

int solution(int n)
{
    int answer = count(n);
    int compare = 0;

    while (1)
    {
        n++;

        if (count(n) == answer)
        {
            break;
        }
    }

    return n;
}