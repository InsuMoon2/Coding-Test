#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s)
{
    string answer = "";
    vector<int> vec;
    string temp;

    for (int i = 0; i < s.size(); i++)
    {
	    if (s[i] != ' ')
	    {
            temp += s[i];
	    }

	    else
	    {
            vec.push_back(stoi(temp));
            temp.clear();
	    }
    }

    vec.push_back(stoi(temp));
    sort(vec.begin(), vec.end());

    answer += to_string(vec.front()) + " " + to_string(vec.back());

    return answer;
}
