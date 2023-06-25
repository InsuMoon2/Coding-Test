#include <iostream>
#include <deque>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    deque<int> dq;
    for (int i = 1; i <= N; i++) {
        dq.push_back(i);
    }

    int cnt = 0;
    while (M--) {
        int num;
        cin >> num;

        int idx = 0;
        for (int i = 0; i < dq.size(); i++) {
            if (dq[i] == num) {
                idx = i;
                break;
            }
        }

        if (idx <= dq.size() / 2) {
            while (dq.front() != num) {
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
        } else {
            while (dq.front() != num) {
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
        }

        dq.pop_front();
    }

    cout << cnt << endl;

    return 0;
}