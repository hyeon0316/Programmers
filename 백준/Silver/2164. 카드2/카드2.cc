#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;





int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
  
    queue<int> q;
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    while(q.size() != 1) {
        q.pop();
        int f = q.front();
        q.pop();
        q.push(f);
    }

    cout << q.front();
}
