#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";

    int x = 0;
    int size = seoul.size();

    for (int i = 0; i < size; i++)
    {
	    if (seoul[i] == "Kim")
	    {
            x = i;
	    }
    }

    answer = "김서방은 " + to_string(x) + "에 있다";

    return answer;
}