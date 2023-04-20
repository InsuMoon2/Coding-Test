#include <vector>
#include <iostream>
#include <set>

// 같은 숫자는 싫어

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    int size = arr.size();
    answer.push_back(arr[0]);

    for (int i = 1; i < size; i++)
    {
	    if (arr[i-1] != arr[i])
	    {
            answer.push_back(arr[i]);
	    }
    }

    return answer;
}