#include <iostream>
#include <algorithm>
using namespace std;

int mans[6];
int womans[6];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int K;

    cin >> N >> K;
    int roomCnt = 0;
    for (int i = 0; i < N; i++) {
        int sex;
        int grade;
        cin >> sex >> grade;
        if (sex == 1) {
            mans[grade - 1]++;
        }
        else {
            womans[grade - 1]++;
        }
   }
    
    for (int i = 0; i < 6; i++) {
        if (mans[i] != 0)
        {
            if (mans[i] < K)
            {
                roomCnt += 1;
            }
            else
            {
                roomCnt += (mans[i] + 1) / K;
            }
        }

        if (womans[i] != 0) {
            if (womans[i] < K) {
                roomCnt += 1;
            }
            else {
                roomCnt += (womans[i] + 1) / K;
            }
        }
    }

    cout << roomCnt;
}