#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

// 홀수 vs 짝수

using namespace std;

int solution(vector<int> num_list)
{
    int answer = 0;
    int hol = 0, jjak = 0;

    for (int i = 0; i < num_list.size(); i++)
    {
        // 짝수
	    if (i % 2 == 0)
	    {
			jjak += num_list[i];
	    }

        // 홀수
	    else if(i % 2 == 1)
	    {
			hol += num_list[i];
	    }

		answer = max(hol, jjak);
    }

    return answer;
}

int main()
{
	vector<int> list = { 4,2,6,1,7,6 };

	cout << solution(list) << endl;;

	return 0;
}