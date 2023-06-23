#include <iostream>
#include <string>
#include <vector>

// 배열 회전시키기

using namespace std;

vector<int> solution(vector<int> numbers, string direction)
{
    vector<int> answer;

	int temp = 0;

	if (direction == "right")
	{
		// 마지막 원소 저장
		temp = numbers.back();
		// 마지막 원소 제거
		numbers.pop_back();
		// 마지막 원소를 맨 앞으로 추가
		numbers.insert(numbers.begin(), temp);
	}

	else if (direction == "left")
	{
	    // 첫번째 원소 저장
		temp = numbers.front();
		// 첫번째 원소 제거
		numbers.erase(numbers.begin());
		// 첫번째 원소를 마지막에 추가
		numbers.push_back(temp);
	}

	for (int i = 0; i < numbers.size(); i++)
	{
		answer.push_back(numbers[i]);
	}

    
    return answer;
}