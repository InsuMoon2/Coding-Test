#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() 
{
	int N = 0, M = 0, result = 0;
	int arr[101] = {};

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				int sum = arr[i] + arr[j] + arr[k];

				if (sum <= M && sum > result)
				{
					result = sum;
				}
			}
		}
	}

	cout << result << endl;

	return 0;
}
