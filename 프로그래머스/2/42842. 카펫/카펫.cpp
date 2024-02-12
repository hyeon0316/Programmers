#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer(2,0);
    
    int sum = brown + yellow;
    
    for(int i = 3; i < sum; i++){
        if(sum % i == 0){
            int h = sum / i;
            if((h -2) * (i - 2) == yellow){
                answer[0] = i;
                answer[1] = h;    
            }
        }
    }
    return answer;
}