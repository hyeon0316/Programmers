#include <iostream>
#include <algorithm>
#include<queue>
using namespace std;

int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0);

	queue<pair<int, int>> q;
	int N;
	cin >> N;
	q.push({ 0,N });
	while (true) {
		pair<int, int> f = q.front();
		q.pop();

		if (f.second == 0) {
			continue;
		}

		if (f.second == 1) {
			cout << f.first;
			break;
		}

		if (f.second % 2 == 0) {
			q.push({ f.first + 1 ,f.second / 2 });
		}

		if (f.second % 3 == 0) {
			q.push({ f.first + 1 ,f.second / 3 });
		}

		q.push({ f.first + 1 ,f.second -1 });
	}

	return 0;
}