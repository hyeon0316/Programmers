#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    unordered_map<int, int> m;
    vector<int> v;
    int n = 0;
    for(int i = 0; i < tangerine.size(); i++){
        m[tangerine[i]]++;
    }
    
    for(auto a : m){
        v.push_back(a.second);
    }
   
    sort(v.begin(), v.end(), greater<>());
    
    for(auto a : v){
        if(n >= k){
            break;
        }
        n += a;
        answer++;
    }
    
    return answer;
}