#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    cin.ignore();
    vector<string> arr(N);
    int index = 0;
    string input;
    for (int i = 0; i < N; i++) {
        getline(cin, input);
        if (isdigit(input[input.length() - 1])) { //push
            string num = input.substr(5);
            arr[index] = num;
            index++;
        }
        else if (input[0] == 't') {
            if (index == 0) {
                cout << -1 << "\n";
            }
            else {
                cout << arr[index - 1] << "\n";
            }
        }
        else if (input[0] == 'p') {
            if (index == 0) {
                cout << -1 << "\n";
            }
            else {
                --index;
                cout << arr[index] << "\n";
            }
        }
        else if (input[0] == 's') {
            cout << index << "\n";
        }
        else if (input[0] == 'e') {
            if (index == 0) {
                cout << 1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }
        }
    }

    return 0;
}