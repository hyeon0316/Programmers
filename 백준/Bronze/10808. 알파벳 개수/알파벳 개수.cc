#include <iostream>
#include <algorithm>
using namespace std;

int arr[26];

int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0);

	string S;
	cin >> S;

	for (int i = 0; i < S.length(); i++) {
		arr[S[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}

	return 0;

}