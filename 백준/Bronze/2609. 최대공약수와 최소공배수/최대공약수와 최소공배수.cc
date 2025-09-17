#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) 
    {
        return a; 
    }
    else 
    { 
        return gcd(b, a % b);
    }
}

int main() {
    int a, b;

    cin >> a >> b;
    int result1 = gcd(a ,b);
    int result2 = a * b / result1;


    cout << result1 << "\n";
    cout << result2;

    return 0;
}