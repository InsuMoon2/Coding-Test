#include <string>
#include <vector>

// 카펫

using namespace std;

vector<int> solution(int brown, int yellow)
{
    vector<int> answer;
    int area = brown + yellow;  // 카펫의 면적

    for (int height = 3; height < area / 2; height++) 
    {
        if (area % height == 0) 
        {
            int width = area / height;

            // 격자의 수 확인
            if (((width + height) * 2 - 4) == brown)
            {
                answer.push_back(width);
                answer.push_back(height);
                break;
            }
        }
    }
    

    return answer;
}