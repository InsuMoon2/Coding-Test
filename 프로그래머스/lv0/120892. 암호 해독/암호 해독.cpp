#include <iostream>
#include <string>
#include <vector>

// 암호 해독

using namespace std;

string solution(string cipher, int code)
{
    string answer = "";

    for (int i = 0; i <= cipher.size(); i++)
    {
	    if (i > 0 && i % code == 0)
	    {
            answer += cipher[i -1];
	    }
    }

    return answer;
}

int main()
{
    string str = "dfjardstddetckdaccccdegk";
    int code = 4;

    cout << solution(str, code);

    return 0;
}