#include <string>
#include <vector>
using namespace std;

string solution(string s) {
    string answer = "";
    bool isChange = true;
    for(auto c : s){
       if(c == ' '){
           answer += c;
           isChange = true;
       }
        else if(isChange){
            answer += toupper(c);
            isChange =false;
        }
        else{
            answer += tolower(c);
        }
    }
    
        
    return answer;
}