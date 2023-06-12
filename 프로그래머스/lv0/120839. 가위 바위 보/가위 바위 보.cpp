#include <iostream>
#include <ostream>
#include <string>
#include <vector>

// 가위 바위 보

using namespace std;

string solution(string rsp)
{
    string answer = "";

    for (int i = 0; i < rsp.size(); i++)
    {
        // 가위
	    if (rsp[i] == '2')
	    {
            answer += '0';
	    }

        // 바위
        else if (rsp[i] == '0')
        {
            answer += '5';
        }

        // 보
	    else if (rsp[i] == '5')
	    {
            answer += '2';
	    }
    }

    return answer;
}

int main()
{
    string str = "2";

    cout << solution(str) << endl;

    return 0;
}