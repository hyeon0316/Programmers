#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

string solution(string s) {
    string token;
    vector<int> v;
    
    int min;
    int max;
    
    stringstream ss(s);
    while(getline(ss, token, ' ')){
        v.push_back(stoi(token));
    }
    
    min = *min_element(v.begin(), v.end());
    max = *max_element(v.begin(), v.end());
    
    return to_string(min) + " " + to_string(max);
}