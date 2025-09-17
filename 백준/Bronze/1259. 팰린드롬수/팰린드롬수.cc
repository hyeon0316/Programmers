#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	while (true) {
		int num;

		cin >> num;
		if (num == 0)
			break;

		string str = to_string(num);
		int length = str.length();
		int half = length / 2;
		bool even = length % 2 == 0;
		string front;
		string back;
		for (int i = 0; i < half; i++) {
			front += str[i];
		}

		half = even ? half - 1 : half;
		for (int i = length - 1; i > half; i--) {
			back += str[i];
		}
		if (front == back) {
			cout << "yes" << "\n";
		}
		else {
			cout << "no" << "\n";
		}

	}
	return 0;
}