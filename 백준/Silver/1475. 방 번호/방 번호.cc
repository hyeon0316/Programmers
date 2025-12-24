#include <iostream>
#include <algorithm>
using namespace std;


int arr[10];

int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0);

	string N;
	cin >> N;
	for (int i = 0; i < N.length(); i++) {
		int index = N[i] - '0';
		if (index == 6)
			index = 9;
		arr[index]++;
	}

	if (arr[9]) {
		if (arr[9] % 2 != 0) {
			arr[9] /= 2;
			arr[9]++;
		}
		else {
			arr[9] /= 2;
		}
	}
	cout << *max_element(arr, arr + 10);

	return 0;

}