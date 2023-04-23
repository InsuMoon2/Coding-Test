#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() 
{
	int start = 1;
	int number = 0;
	cin >> number;

	int count = 1;

	while (number > start)
	{
		start += (6 * count);
		count++;
	}

	cout << count;

    return 0;
}
