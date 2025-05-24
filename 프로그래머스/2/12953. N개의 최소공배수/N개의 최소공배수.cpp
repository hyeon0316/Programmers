#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) 
        return a;
    return gcd(b, a % b);
}

int lcd(int a, int b){
    return a * b / gcd(a, b);
}

int solution(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int answer = arr[0];
    for(int i = 1; i < arr.size(); i++){
        answer = lcd(answer, arr[i]);
    }
    
    return answer;
}