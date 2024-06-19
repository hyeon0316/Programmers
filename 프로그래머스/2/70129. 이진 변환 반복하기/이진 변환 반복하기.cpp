#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string GetBinary(int n){
    string result = "";
    while(n > 0){
        result = to_string(n % 2) + result;
        n /= 2;
    }
    return result;
}

vector<int> solution(string s) {
    vector<int> answer;
    int count = 0;
    int totalRemove = 0;
    
    while(s != "1"){
        int originCount = s.length();
        int removeCount = 0;
        s.erase(remove(s.begin(), s.end(), '0'), s.end());
        removeCount = originCount - s.length();
        totalRemove += removeCount;
        s = GetBinary(s.length());
        count++;
    }
    
    answer.push_back(count);
    answer.push_back(totalRemove);
    return answer;
}