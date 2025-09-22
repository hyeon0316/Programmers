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

int main() {

    string result;
    vector<string> v(3);
    for (int i = 0; i < 3; i++) {
        cin >> v[i];
    }

    int offset = 0;
    if (isdigit(v[2][0])) offset = 1;
    else if (isdigit(v[1][0])) offset = 2;
    else offset = 3;

    int num = stoi(v[3 - offset]) + offset;
    result = checkFizzBuzz(num);

    std::cout << result;
    return 0;
}