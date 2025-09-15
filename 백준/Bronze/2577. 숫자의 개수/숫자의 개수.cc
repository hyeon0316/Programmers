#include <iostream>
#include <string>
using namespace std;

int main()
{
    int A, B, C;
    int countable[10] = { };
    cin >> A >> B >> C;

    int result = A * B * C;
    string str = to_string(result);
    for (int i = 0; i <= str.length(); i++) {
        countable[str[i] - '0']++;
    }

    for (int v : countable) {
        cout << v << "\n";
    }

    return 0;
}