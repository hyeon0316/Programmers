#include <iostream>
#include <algorithm>
#include<map>
using namespace std;

int N;
int arr[1000001];
int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	map<int, int> m;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		m[arr[i]]++;
	}

	for (auto& it : m) {
		for (int i = 0; i < it.second; i++) {
			cout << it.first << "\n";
		}
	}

	return 0;
}