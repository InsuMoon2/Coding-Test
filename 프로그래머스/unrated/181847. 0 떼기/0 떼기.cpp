#include <string>
#include <vector>

// 0 떼기

using namespace std;

string solution(string n_str)
{
    string answer = "";

    for (int i = 0; i < n_str.size(); i++)
    {
	    if (n_str[i] != '0')
	    {
            for (int j = i; j < n_str.size(); j++)
            {
                answer += n_str[j];
            }

            break;
	    }
    }

    return answer;
}