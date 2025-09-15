#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    unordered_set<int> us;
    for (int i = 0; i < 10; i++) {
        cin >> n;
        us.insert(n % 42);
    }

    cout << us.size();
    return 0;
}