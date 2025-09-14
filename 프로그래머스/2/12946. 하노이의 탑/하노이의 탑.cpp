#include <string>
#include <vector>

using namespace std;

void hanoi(int n, int start, int goal, int other, vector<vector<int>>& a){
    if(n == 1){
        a.push_back({start, goal});
        return;
    }
    hanoi(n - 1, start, other, goal, a);
    a.push_back({start, goal});
    hanoi(n - 1, other, goal, start, a);
}

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    hanoi(n, 1, 3, 2, answer);
    return answer;
}