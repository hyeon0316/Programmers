#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, tmp;
    int max = 0;
    int sum = 0;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> tmp;
        sum += tmp;
        if (tmp > max) {
            max = tmp;
        }
    }

    double result = (sum * 100.0 / max) / N;

    cout << result;

    return 0;
}