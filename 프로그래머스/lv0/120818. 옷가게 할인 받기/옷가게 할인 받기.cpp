#include <iostream>
#include <string>
#include <vector>

// 옷가게 할인 받기

using namespace std;

int solution(int price)
{
    int answer = 0;

    if (price >= 500000)
    {
        answer = price * 0.8;
    }

    else if (price >= 300000)
    {
        answer = price * 0.9;
    }

    else if (price >= 100000)
    {
        answer = price * 0.95;
    }
    
    else
    {
        answer = price;
    }

    return answer;
}

int main()
{
    int price;
    cin >> price;

    cout << solution(price) << endl;

    return 0;
}