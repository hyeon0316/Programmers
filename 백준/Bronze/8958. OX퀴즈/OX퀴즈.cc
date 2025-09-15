#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string str;
    int sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> str;
        int stack = 1;
        for (auto& c : str) {
            if (c == 'O') {
                sum += stack++;
            }
            else {
                stack = 1;
            }
        }
        cout << sum << "\n";
        sum = 0;
    }
    return 0;
}