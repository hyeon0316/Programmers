#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int cnt = 1;
    for(int i = 0; i < progresses.size(); i++){
        int n = 100 - progresses[i];
        n = n / speeds[i];
        if((100 - progresses[i]) % speeds[i] != 0){
            n++;            
        }
        progresses[i] = n;
    }
    
    int max = progresses[0];
    for(int i = 1; i < progresses.size(); i++){
        if(max < progresses[i]){
            answer.push_back(cnt);
            cnt = 1;
            max = progresses[i];
        }
        else{
            cnt++;
        }
    }
    
    answer.push_back(cnt);
    
    return answer;
}