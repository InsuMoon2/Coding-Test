#include <string>
#include <vector>

// 내적

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        answer += a[i] * b[i];
    }

    return answer;
}