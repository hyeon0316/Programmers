#include <vector>
#include <iostream>
#include <stack>
using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    stack<int> s;
    s.push(arr[0]);
    answer.push_back(arr[0]);
    for(int i = 1; i < arr.size(); i++){
        int f = s.top();
        if(f == arr[i])
            continue;
        
        s.push(arr[i]);
        answer.push_back(arr[i]);
    }
    
    
    
    return answer;
}