#include <iostream>
#include <algorithm>
using namespace std;

int arrN[100001];
int N;

int binary(int target) {
	int start =  0;
	int end = N - 1;
	int mid = (start + end) / 2;

	if (arrN[start] == target || arrN[end] == target)
		return 1;

	while (start <= end) {
		if (arrN[mid] == target)
			return 1;

		if (target > arrN[mid]) {
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}

		mid = (start + end) / 2;
	}

	return 0;
}

int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0);

	int M;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arrN[i];
	}
	cin >> M;

	sort(arrN, arrN + N);

	int c;
	for (int i = 0; i < M; i++) {
		cin >> c;
		cout << binary(c) << "\n";
	}

	return 0;

}