#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int c = 1;
    int max = n % 2 == 0 ? n / 2 : n / 2 + 1;
    int check = 0;
    
    while(c < max){
        for(int i = c; i <= max; i++){
            check += i;
            if(check == n){
                c++;
                answer++;
                check = 0;
                break;
            }
            else if(check > n){
                c++;
                check = 0;
                break;
            }
        }
    }
    
    return ++answer;
}