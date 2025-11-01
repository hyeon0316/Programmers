#include <iostream>
#include <algorithm>
using namespace std;

int A[51];
int B[51];

int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < N; i++) {
		cin >> B[i];
	}

	int S = 0;

	sort(A, A + N);
	sort(B, B + N, greater<int>());

	for (int i = 0; i < N; i++) {
		S += A[i] * B[i];
	}


	cout << S;

	return 0;

}