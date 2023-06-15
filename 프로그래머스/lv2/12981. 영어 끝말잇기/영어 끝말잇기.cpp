#include <iostream>
#include <string>
#include <vector>
#include <map>

// 영어 끝말잇기

using namespace std;

vector<int> solution(int n, vector<string> words)
{
    vector<int> answer(2);
    map<string, int> m;
    m[words[0]]++;

    for (int i = 1; i < words.size(); i++)
    {
        m[words[i]]++;

        // 1보다 커지거나, front와 back이 같으면.
        if (m[words[i]] > 1 || words[i].front() != words[i-1].back())
        {
            answer[0] = i % n + 1; // player 번호
            answer[1] = i / n + 1; // 단어의 번호

            break;
        }
    }

    return answer;
}

int main()
{
    vector<string> words = {"tank", "kick", "wheel", "land", "dream", "mother", "robot", "tank"};
    int n = 3;

    solution(n, words);

    return 0;
}