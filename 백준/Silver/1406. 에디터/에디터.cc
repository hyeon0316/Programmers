#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string input;
    int N;

    cin >> input >> N;
    cin.ignore();

    list<char> line;
    for (auto c : input) {
        line.push_back(c);
    }

    auto cursor = line.end(); 

    for (int i = 0; i < N; i++) {
        string cmd;
        getline(cin, cmd);

        if (cmd[0] == 'L') {
            if (cursor != line.begin()) --cursor;
        }
        else if (cmd[0] == 'D') {
            if (cursor != line.end()) ++cursor;
        }
        else if (cmd[0] == 'B') {
            if (cursor != line.begin()) {
                cursor = line.erase(--cursor); 
            }
        }
        else if (cmd[0] == 'P') {
            line.insert(cursor, cmd[2]); 
        }
    }

    for (auto c : line) cout << c;
}