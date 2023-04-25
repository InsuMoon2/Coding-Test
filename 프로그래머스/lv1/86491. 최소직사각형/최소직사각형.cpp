#include <algorithm>
#include <string>
#include <vector>

// 최소 직사각형
// 정렬 후 가로, 세로에서 가장 큰 수끼리 곱해주면 된다.

using namespace std;

int solution(vector<vector<int>> sizes)
{
    int answer = 0;
    int width = 0, height = 0;

    for (auto& s : sizes)
    {
        sort(s.begin(), s.end());

        width = max(width, s[0]);
        height = max(height, s[1]);
    }

    answer = width * height;

    return answer;
}