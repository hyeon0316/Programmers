#include <iostream>
#include <algorithm>
using namespace std;

int arr[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a, b;
    cin >> a >> b;

    int cnt = 0;
    for (int i = 0; i < a.length(); i++) {
        arr[a[i] - 'a']++;
    }

    for (int i = 0; i < b.length(); i++) {
        arr[b[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        cnt += abs(arr[i]);
    }
    cout << cnt;
}