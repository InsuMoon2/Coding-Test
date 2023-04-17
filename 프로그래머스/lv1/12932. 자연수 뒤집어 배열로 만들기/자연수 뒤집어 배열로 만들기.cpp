#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;

    // long long n을 string 으로 변환.
    string str = to_string(n);

    int size = str.size();

    for (int i = size -1; i >= 0; i--)
    {
        answer.push_back(str[i] - '0');
    }


    return answer;
}