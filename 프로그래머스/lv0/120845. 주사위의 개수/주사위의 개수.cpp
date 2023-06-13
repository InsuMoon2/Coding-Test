#include <string>
#include <vector>

// 주사위의 개수

using namespace std;

int solution(vector<int> box, int n)
{
    int answer = 1;
    vector<int> vec;

    // 10, 8, 6
    // 10 / 3 = 3.
    // 8 / 3 = 2.
    // 6 / 3 = 2. == 3 * 2 * 2 = answer. 12;

    for (int i = 0; i < box.size(); i++)
    {
        int input;
        input += (box[i] / n);

        answer *= input;
        input = 0;
    }



    return answer;
}