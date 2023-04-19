#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    int size = s.size();
    int mid = size / 2;

    if (size % 2 == 0)
    {
        answer = s.substr(mid - 1 , 2);
    }

    else
    {
        answer = s.substr(mid , 1);
    }

    return answer;
}