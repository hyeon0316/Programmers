#include <string>
#include <vector>
#include <queue>
#include <unordered_map>
#include <algorithm>
using namespace std;

int solution(vector<int> priorities, int location) {
    char a = 'A';
    char target = a + location;    
    vector<int> v;
    queue<int> q;
    priority_queue<int> pq;
    unordered_map<char,int> um;    
    for(int i = 0; i < priorities.size(); i++){
       q.push(a);
       um[a++] = priorities[i];
       pq.push(priorities[i]);
    }
    
    
    while(!pq.empty()){
        char c = q.front();
        if(um[c] == pq.top()){
            v.push_back(c);
            q.pop();
            pq.pop();
        }
        else{
             q.pop();
             q.push(c);
        }
    }
    
    auto it = find(v.begin(), v.end(), target);
    return distance(v.begin(), it) + 1; 
    
}