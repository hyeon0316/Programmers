#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int solution(string skill, vector<string> skill_trees) {
     int answer = 0;
    bool isPossible = true;
    string sk;

    for (const auto& trees : skill_trees) {
        for (const auto& k : trees) {
            if (skill.find(k) != string::npos) { 
                sk.push_back(k);
            }
        }

        for (int i = 0; i < sk.length(); i++) {
            if (sk[i] != skill[i]) { 
                isPossible = false;
                break;
            }
        }

        if (isPossible) { 
            answer++;
        }
        isPossible = true;
        sk.clear();
    }
    
    return answer;
}