#include <iostream>
#include <string>
#include <vector>

// 길이에 따른 연산

using namespace std;

int solution(vector<int> num_list)
{
    int answer = 0;
	int sum = 0;
	int mul = 1;
    int size = num_list.size();

    for (int i = 0; i < size; i++)
    {
	    if (size >= 11)
	    {
			sum += num_list[i];
			answer = sum;
	    }

	    else if (size <= 10)
	    {
			mul *= num_list[i];
			answer = mul;
	    }
    }

    return answer;
}

int main()
{
	vector<int> vec = { 2, 3, 4, 5 };

	cout << solution(vec) << endl;

	return 0;
}