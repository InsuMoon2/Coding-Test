#include <string>
#include <vector>
#include <algorithm>

// 중앙값 구하기

using namespace std;

int solution(vector<int> array)
{
    int answer = 0;
    int MID = (array.size() / 2);

    sort(array.begin(), array.end());

    answer = array[MID];

    return answer;
}