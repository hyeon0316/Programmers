#include <iostream>
#include <algorithm>
using namespace std;

int arr[101];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int v;
    int cnt = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    cin >> v;

    for (int i = 0; i < N; i++) {
        if (arr[i] == v)
            cnt++;
    }

    cout << cnt;
}