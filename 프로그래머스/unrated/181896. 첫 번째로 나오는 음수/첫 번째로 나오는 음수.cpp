	#include <string>
	#include <vector>

	// 첫 번째로 나오는 음수

	using namespace std;

	int solution(vector<int> num_list)
	{
	    int answer = 0;

	    for (int i = 0; i < num_list.size(); i++)
	    {
		    if (num_list[i] < 0)
		    {
	            answer = i;
				return answer;
		    }

		    else
		    {
				answer = -1;
		    }
	    }

	    return answer;
	}