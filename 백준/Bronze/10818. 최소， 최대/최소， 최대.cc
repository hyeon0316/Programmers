#include <iostream>
using namespace std;

int main()
{
    int N;
    int c;

    cin >> N;
    int max = -1000000;
    int min = 1000000;
    for (int i = 0; i < N; i++) {
        cin >> c;
        if (max < c) {
            max = c;
        }

        if (min > c) {
            min = c;
        }
    }

    cout << min << " " << max;

    return 0;
}