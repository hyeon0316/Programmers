#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    bool isUsed;
    int N, M;
    cin >> N >> M;
    vector<int> v(N);
    vector<int> check(N);
    for (int i = 1; i <= N; i++) {
        v[i - 1] = i;
    }

    do {
        isUsed = true;
        for (int i = 0; i < M; i++)
        {
            if (check[i] != v[i]) {
                isUsed = false;
                break;
            }
        }

        if (isUsed)
            continue;

        for (int i = 0; i < M; i++)
        {
            cout << v[i] << " ";
            check[i] = v[i];
        }
        cout << "\n";

    } while (next_permutation(v.begin(), v.end()));
    return 0;
}