#include <iostream>
using namespace std;

int main()
{
    int H;
    int M;

    cin >> H >> M;

    M = M - 45;
    if (M < 0) {
        M = 60 + M;
        if (H == 0) {
            H = 23;
        }
        else {
            H -= 1;
        }
    }

    cout << H <<" "<< M;
    return 0;
}