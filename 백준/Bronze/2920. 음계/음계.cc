#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {};
    bool isAscending = false;
    bool isMixed = false;
    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
    }
    int index = 0;

    while (index != 7) {
        if (arr[index] + 1 == arr[index + 1]) {
            isAscending = true;
        }
        else if (arr[index] - 1 == arr[index + 1]) {
            isAscending = false;
        }
        else {
            isMixed = true;
            break;
        }
        index++;
    }

    if (isMixed) {
        cout << "mixed";
    }
    else {
        if (isAscending) {
            cout << "ascending";
        }
        else {
            cout << "descending";
        }
    }

    return 0;
}