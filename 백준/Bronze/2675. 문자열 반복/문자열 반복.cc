#include <iostream>
using namespace std;

int main()
{
    int T;

    cin >> T;

    int R;
    string S;
    string result;
    for (int i = 0; i < T; i++) {
        cin >> R >> S;
        for (int j = 0; j < S.length(); j++) {
            for (int k = 0; k < R; k++) {
                result += S[j];
            }
        }
        cout << result << "\n";
        result = "";
    }

    return 0;
}