#include <iostream>
#include <queue>
using namespace std;

int visited[100001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;
    queue<pair<int,int>> q;
    q.push({ 0,N });
    visited[N] = 1;
    while (!q.empty()) {
        pair<int,int> f = q.front();
        q.pop();

        if (f.second == K)
        {
            cout << f.first;
            break;
        }

        if (f.second - 1 >= 0 && !visited[f.second - 1])
        {
            visited[f.second - 1] = 1;
            q.push({ f.first + 1, f.second - 1 });
        }
        if (f.second + 1 <= 100000 && !visited[f.second + 1])
        {
            visited[f.second + 1] = 1;
            q.push({ f.first + 1, f.second + 1 });
        }
        if (f.second * 2 <= 100000 &&  !visited[f.second * 2])
        {
            visited[f.second * 2] = 1;
            q.push({ f.first + 1, f.second * 2 });
        }

    }
   
    return 0;
}