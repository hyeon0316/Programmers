#include <iostream>
#include<string>
#include<stack>
using namespace std;

int solution(string s)
{
    int answer = 0;
    if(s.empty() || s.size() % 2 != 0)
        return answer;

    stack<char> stack;
    for(size_t i = 0; i < s.length(); i++)
    {
        if(stack.empty() || stack.top() != s[i])
            stack.push(s[i]);
        else
            stack.pop();
        
    }

    if(stack.empty())
        answer++;
    
    return answer;
}