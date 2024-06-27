#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
}

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    unordered_map<int, int> um;
    
    for(int i = 0; i < tangerine.size(); i++){
        um[tangerine[i]]++;    
    }
    
    vector<pair<int,int>> v(um.begin(), um.end());
    sort(v.begin(), v.end(), compare);
    
    for (const auto& pair : v) {
        k -= pair.second;
        answer++;
        if(k <= 0)
            break;
    }
    
    return answer;
}