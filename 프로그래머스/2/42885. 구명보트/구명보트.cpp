#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int frontIndex = 0;
    int lastIndex = people.size() - 1;
    sort(people.begin(), people.end());
    
    while(frontIndex <= lastIndex){
        if(people[frontIndex] + people[lastIndex] <= limit){
            frontIndex++;
        }
        
        lastIndex--;
        answer++;
    }
    return answer;
}