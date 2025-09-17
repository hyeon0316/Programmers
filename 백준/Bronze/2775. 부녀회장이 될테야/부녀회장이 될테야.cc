#include <iostream>
#include <vector>
using namespace std;


int main() {

    int T;

    cin >> T;

    for (int i = 0; i < T; i++) {
        int k, n; //k층 n호( 0층부터 시작, 14호수 까지)
        cin >> k >> n;

        vector<vector<int>> v(k + 1, vector<int>(n, 0));

        for (int i = 1; i <= n; i++) {
            v[0][i - 1] = i;
        }

        int cnt = 1;
        while (cnt <= k) {
            for (int i = 0; i < n; i++) {
                int total = 0;
                for (int j = 0; j <= i; j++) {
                    total += v[cnt - 1][j];
                }

                v[cnt][i] = total;
            }
            cnt++;
        }

        cout << v[k][n - 1]<< "\n";
    }
    return 0;
}