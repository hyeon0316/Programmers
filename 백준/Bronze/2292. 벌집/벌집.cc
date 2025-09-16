#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N; 

	int start = 2;
	int end = 7;

	int n = 2;
	if (N != 1)
	{
		while (true) {
			if (end >= N) {
				break;
			}
			end += 6 * n;
			n++;
			start++;
		}
	}
	else {
		start = 1;
	}

	cout << start;
	return 0;
}