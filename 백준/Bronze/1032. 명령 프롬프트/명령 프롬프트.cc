#include<vector>
#include <iostream>
using namespace std;


int main()
{
	int N;
	string result;
	cin >> N;
	
	vector<string> arr(N);

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int strLength = arr[0].size();
	result = arr[0];
	if (N != 1){
		for (int i = 0; i < strLength; i++) {
			char c = arr[0][i];
			for (int j = 1; j < N; j++) {
				if (c != arr[j][i]){
					result[i] = '?';
					break;
				}
			}
		}
	}


	cout << result;
	return 0;
}