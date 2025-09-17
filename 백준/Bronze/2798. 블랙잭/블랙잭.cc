#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int result = 0;
	int N, M;
	cin >> N >> M;
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				int sum = v[i] + v[j] + v[k];
				if (sum > M) {
					continue;
				}

				if (result < sum) {
					result = sum;
				}
			}
		}
	}

	cout << result;
	return 0;
}