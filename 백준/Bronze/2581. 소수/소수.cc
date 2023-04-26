#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() 
{
	//소수의 합과 소수 중에 최솟값을 구해라.
	int M, N;
	int sum = 0, min = -1;
	int count = 0;

	cin >> M >> N;

	for (int i = M; i <= N; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				count++;
			}
		}
		
		if (count == 2)
		{
			if (min == -1)
			{
				min = i;
			}

			sum += i;
		}

		count = 0;
	}

	if (min == -1)
	{
		cout << "-1" << endl;
	}

	else
	{
		cout << sum << endl << min << endl;
	}
	

	return 0;
} 
