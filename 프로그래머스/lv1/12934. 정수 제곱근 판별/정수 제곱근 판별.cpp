#include <string>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

long long solution(long long n)
{
    long long answer = sqrt(n);

    if (answer * answer == n)
    {
        return (answer + 1) * (answer + 1);
    }

    else
    {
        return answer = -1;
    }
}