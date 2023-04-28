#include <string>
#include <vector>
#include <algorithm>

// 소문자로 바꾸기

using namespace std;

string solution(string myString)
{
    string answer = "";
    transform(myString.begin(), myString.end(), myString.begin(), ::tolower);

    answer = myString;

    return answer;
}