#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int cnt = 0;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        stack<char> st;
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); j++) {
            if (st.empty()) {
                st.push(s[j]);
            }
            else {
                char t = st.top();
                if ((t == 'B' && s[j] == 'B') || t == 'A' && s[j] == 'A') {
                    st.pop();
                }
                else {
                    st.push(s[j]);
                }
            }
        }

        if (st.empty()) {
            cnt++;
        }
    }
    
    cout << cnt;
}
