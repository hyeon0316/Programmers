#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    int startIndex = 0;
    
    while(startIndex != prices.size() - 1){
        int count = 0;
        for(int i = startIndex + 1; i < prices.size(); i++){
            count++;
            if(prices[startIndex] > prices[i] || 
              i == prices.size() - 1){
                answer.push_back(count);
                break;
            }
        }
        startIndex++;
    }
    
    answer.push_back(0);
    return answer;
}