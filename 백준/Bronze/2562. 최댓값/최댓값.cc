#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(9);
    int max = -1;
    int index;
    for (int i = 0; i < 9; i++) {
        cin >> v[i];
        if (v[i] > max) {
            max = v[i];
            index = i;
        }
    }

    cout << max << "\n" << index + 1;
    return 0;
}