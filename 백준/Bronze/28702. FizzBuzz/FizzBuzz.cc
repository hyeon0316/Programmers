#include <iostream>
#include <vector>
#include<string>
using namespace std;

string checkFizzBuzz(int num) {
    string result;
    if (num % 3 == 0 && num % 5 == 0) {
        result = "FizzBuzz";
    }
    else if (num % 3 == 0) {
        result = "Fizz";
    }
    else if (num % 5 == 0) {
        result = "Buzz";
    }
    else {
        result = to_string(num);
    }
    return result;
}

bool isDigit(char c) {
    if (c >= '0' && c <= '9') {
        return true;
    }
    return false;
}

int main() {

    string result;
    vector<string> v(3);
    for (int i = 0; i < 3; i++) {
        cin >> v[i];
    }

    if (isDigit(v[2][0])) {
        int num = stoi(v[2]);
        num++;
        result = checkFizzBuzz(num);
    }
    else {
        if (isDigit(v[1][0])) {
            int num = stoi(v[1]);
            num += 2;
            result = checkFizzBuzz(num);
        }
        else if (isDigit(v[0][0])) {
            int num = stoi(v[0]);
            num += 3;
            result = checkFizzBuzz(num);
        }
    }

    std::cout << result;
    return 0;
}