#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	int num;
	cin >> N;

	int cnt = 0;
	int result = 0;
	for (int i = 0; i < N; i++) {
		cin >> num;

		if (num == 2) {		
			result++;
		}
		else {
			if (num == 1) {		
				cnt++;
			}
			for (int j = 2; j < num; j++) {
				if (num % j == 0) {
					cnt++;
				}
			}
			if (cnt == 0) {
				result++;
			}
			cnt = 0;
		}
	}

	cout << result;

	return 0;
}