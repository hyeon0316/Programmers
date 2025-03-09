#include <string>
#include <vector>

using namespace std;

int getOne(int n){
    int cnt = 0;
    while(n != 0){
        if(n % 2 != 0)
            cnt++;
        n /= 2;
    }
    return cnt;
}

int solution(int n) {
    int answer=  0;
    int c = getOne(n);
    
    while(true){
        n++;
        if(c == getOne(n)){
            answer = n;
            break;
        }
    }
    
    return answer;
}