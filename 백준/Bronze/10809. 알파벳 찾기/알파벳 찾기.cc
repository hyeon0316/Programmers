#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;

    for (int i = 'a'; i <= 'z'; i++) {
        bool isFind = false;
        for (int j = 0; j < S.length(); j++) {
            if (i == S[j]) {
                if (j == 0) {
                    cout << 0 << " ";
                }
                else {
                    cout << j << " ";
                }
                isFind = true;
                break;
            }
        }
        if (!isFind) {
            cout << -1 << " ";
        }
        isFind = false;
    }
    return 0;
}