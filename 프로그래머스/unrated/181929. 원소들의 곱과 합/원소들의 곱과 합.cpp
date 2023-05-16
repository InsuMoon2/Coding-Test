#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

// 원소들의 곱과 합

using namespace std;

int solution(vector<int> num_list)
{
    int answer = 0;
    int product = 1, sum = 0;

    for (int i = 0; i < num_list.size(); i++)
    {
        product *= num_list[i];
        sum += num_list[i];
    }

    int sum_pow = pow(sum, 2);

    if (product < sum_pow)
    {
        answer = 1;
    }

    return answer;
}

