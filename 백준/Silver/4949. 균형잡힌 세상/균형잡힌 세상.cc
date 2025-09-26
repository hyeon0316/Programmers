#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        string input;
        getline(cin, input);
        if (input == ".")
            break;

        stack<char> s;
        bool isValid = true; 

        for (int i = 0; i < input.size(); i++) {
            if (input[i] == '(' || input[i] == '[') {
                s.push(input[i]);
            }
            else if (input[i] == ')') {
                if (s.empty() || s.top() != '(') {  
                    isValid = false;
                    break;
                }
                s.pop();
            }
            else if (input[i] == ']') {
                if (s.empty() || s.top() != '[') {  
                    isValid = false;
                    break;
                }
                s.pop();
            }
        }

        if (isValid && s.empty()) {
            cout << "yes" << "\n";
        }
        else {
            cout << "no" << "\n";
        }
    }

    return 0;
}