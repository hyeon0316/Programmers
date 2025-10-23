#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;


bool compare(const string& a, const string& b) {
	if (a.length() == b.length()) {
		int aSum = 0;
		int bSum = 0;
		for (auto& c : a) {
			if (c >= '1' && c <= '9') {
				aSum += c - '0';
			}
		}
		for (auto& c : b) {
			if (c >= '1' && c <= '9') {
				bSum += c - '0';
			}
		}
		if (aSum == bSum) 
			return a < b;

		return aSum < bSum;
	}
	return a.length() < b.length();
}

int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	vector<string> serialNums(N);


	for (int i = 0; i < N; i++) {
		cin >> serialNums[i];
	}

	sort(serialNums.begin(), serialNums.end(), compare);
	for (int i = 0; i < N; i++) {
		cout << serialNums[i] << "\n";
	}
	return 0;
}