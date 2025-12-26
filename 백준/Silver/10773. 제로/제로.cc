#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> s;
    int K;
    cin >> K;
    int sum = 0;
    for (int i = 0; i < K; i++) {
        int n;
        cin >> n;
        if (n == 0) {
            s.pop();
        }
        else {
            s.push(n);
        }
    }

    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }

    cout << sum;
}