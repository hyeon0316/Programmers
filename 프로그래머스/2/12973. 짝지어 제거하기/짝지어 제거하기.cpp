#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    stack<char> st;
    st.push(s[0]);
    for(int i = 1; i < s.size(); i++){
        if(!st.empty()){
            if(st.top() == s[i]){
                st.pop();
                continue;
            }
        }
        st.push(s[i]);
    }
    
    return st.empty();
}