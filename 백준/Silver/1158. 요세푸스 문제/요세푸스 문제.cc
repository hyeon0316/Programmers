#include <iostream>
#include <algorithm>
#include <list>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int K;
    list<int> list;

    cin >> N >> K;
    for (int i = 1; i <= N; i++)
    {
        list.push_back(i);
    }

    cout << "<";
    auto it = list.begin();
    while (N > 0) {
        for (int i = 0; i < K - 1; i++) {
            it++;
            if (it == list.end()) {
                it = list.begin();
            }
        }
        if(list.size() -1)
            cout << *it << ", ";
        else
            cout << *it;
        it = list.erase(it);
        if (it == list.end())
            it = list.begin();
        N--;
    }
    cout << ">";

}