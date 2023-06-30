#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

bool isPrime(long long num)
{
	// 1 예외처리
	if (num <= 1)
	{
		return false;
	}
	// 2, 3 예외처리
	if (num == 2 || num == 3)
	{
		return true;
	}

	// 2나 3으로 나눠지면 소수가 아님
	if (num % 2 == 0 || num % 3 == 0)
	{
		return false;
	}

	for (long long i = 5; i * i <= num; i += 6)
	{
		if (num % i == 0 || num % (i + 2) == 0)
		{
			return false;
		}
			
	}

	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	long long N;
	cin >> N;


	for (int i = 0; i < N; ++i)
	{
		long long input;
		cin >> input;

        if (isPrime(input)) // 이미 소수인 경우
        {
            cout << input << endl;
        }
        else // 소수가 아닌 경우
        {
            input++; // 다음 수부터 검사
		    while (!isPrime(input))
		    {
			    input++;
		    }

		    cout << input << endl;
        }
		
	}
	
	return 0;
}