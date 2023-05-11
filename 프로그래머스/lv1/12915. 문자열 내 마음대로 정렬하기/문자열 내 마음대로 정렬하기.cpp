#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

// 문자열 내 마음대로 정렬하기

using namespace std;

int N;
bool compare(string a, string b)
{
	if(a[N] == b[N])
	{
        return a < b;
	}

	else
	{
        return a[N] < b[N];
	}
}

vector<string> solution(vector<string> strings, int n)
{

    N = n;

    sort(strings.begin(), strings.end(), compare);


    return strings;
}

int main()
{
    vector<string> vec = { "sun", "bed", "car" };
    int n;
    cin >> n;

    solution(vec, n);

    return 0;
}