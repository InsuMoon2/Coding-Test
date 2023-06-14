#include <string>
#include <vector>

// 배열 비교하기

using namespace std;

int solution(vector<int> arr1, vector<int> arr2)
{
    int answer = 0;
    int arr1_size = arr1.size();
    int arr2_size = arr2.size();

    if (arr1_size == arr2_size)
    {
        int sum1 = 0, sum2 = 0;

        for (int i = 0; i < arr1_size; i++)
        {
            sum1 += arr1[i];
            sum2 += arr2[i];
        }

        if (sum1 > sum2)
        {
            answer = 1;
        }

        else if (sum1 < sum2)
        {
            answer = -1;
        }

        else
        {
            answer = 0;
        }
    }

    else if (arr1_size > arr2_size)
    {
        answer = 1;
    }

    else if (arr1_size < arr2_size)
    {
        answer = -1;
    }

    return answer;
}