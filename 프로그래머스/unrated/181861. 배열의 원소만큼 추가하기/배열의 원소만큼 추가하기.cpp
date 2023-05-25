#include <string>
#include <vector>

// 배열의 원소만큼 추가하기

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
	    for (int j = 0; j < arr[i]; j++)
	    {
            answer.push_back(arr[i]);
	    }
    }

    return answer;
}