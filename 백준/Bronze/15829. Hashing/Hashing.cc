#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int L;
	string str;

	const long long MOD = 1234567891;
	const long long BASE = 31;

	cin >> L >> str;
	long long result = 0;
	long long pow = 1;

	for (int i = 0; i < L; i++) {
		int v = str[i] - 'a' + 1;
		long long add = (v * pow) % MOD;
		result = (result + add) % MOD;
		pow = (pow * BASE) % MOD;
	}
	cout << result;
	return 0;
}