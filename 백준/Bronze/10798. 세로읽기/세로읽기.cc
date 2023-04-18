#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>
#include <map>

using namespace std;

int main()
{
	string world[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> world[i];
	}

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i < world[j].size())
			{
				cout << world[j][i];
			}
		}
	}


	return 0;
}