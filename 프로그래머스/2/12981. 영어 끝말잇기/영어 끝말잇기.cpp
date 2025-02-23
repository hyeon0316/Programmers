#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer(2,0);
    unordered_set<string> us;
    char prevLastAlphabet = words[0][0];
    int turn = 1;
    
    for(int i = 0; i < words.size(); i++){
        string curWord = words[i];
        char firstAlphabet = curWord[0];
        int p = i % n == 0 ? 1 : i % n + 1;
        
        if(us.find(curWord) != us.end() || 
            firstAlphabet != prevLastAlphabet){
            answer[0] = p;
            answer[1] = turn;
            break;
        }
        
        if((i + 1) % n == 0){
            turn++;
        }
        prevLastAlphabet = curWord[curWord.size() - 1];
        us.insert(curWord);
    }    
    

    return answer;
}