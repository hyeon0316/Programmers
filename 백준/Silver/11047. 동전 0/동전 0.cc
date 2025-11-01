#include <iostream>
#include <algorithm>
using namespace std;

int arr[11];
int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0);

	int startIndex = 0;
	int cnt = 0;
	int N, K;
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if (arr[i] <= K) {
			startIndex = i;
		}
	}

	for (int i = startIndex; i >= 0; i--) {
		if (arr[i] > K)
			continue;

		cnt += K / arr[i];
		K %= arr[i];

		if (K == 0)
			break;
	}


	cout << cnt;

	return 0;
}