#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int N;

	cin >> N;
	int result = 0;

	for (int i = 1; i < N; i++) {
		string str = to_string(i);
		int sum = 0;
		for (int j = 0; j < str.length(); j++) {
			sum += str[j] - '0';
		}
		if (N == sum + i) {
			result = i;
			break;
		}
	}
	

	cout << result;
	return 0;
}