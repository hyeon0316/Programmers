#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> tmp;
    int n = 0;
    
    for(int i = 0; i < speeds.size(); i++){
        int remain = 100 - progresses[i];
        int p = remain / speeds[i];
        p = remain > (p * speeds[i]) ? p + 1 : p;
        tmp.push_back(p);
    }
    
    for(int i = 0; i < tmp.size(); i++){
        if(n < tmp[i]){
            answer.push_back(1);
            n = tmp[i];
        }
        else{
            answer[answer.size() - 1] += 1;
        }
    }
    
    return answer;
}