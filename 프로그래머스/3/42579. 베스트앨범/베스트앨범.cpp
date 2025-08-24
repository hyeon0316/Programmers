#include <string>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    //모든 장르는 재생된 횟수가 다릅니다.
    //string을 key, plays를 내림차순하여 2개만 보유한 map
    //가장 높은 장르값 기준 내림차순 하는 map

    vector<int> answer;
    unordered_map<string, vector<pair<int, int>>> um;
    unordered_map<string, int> totalUm;
    map<int, string, greater<int>> m;
    for (int i = 0; i < genres.size(); i++) {
        um[genres[i]].push_back({ i, plays[i] });
        totalUm[genres[i]] += plays[i];
    }

    for (auto& kv : totalUm) {
        sort(um[kv.first].begin(), um[kv.first].end(), [](auto& a, auto& b) {
            if (a.second == b.second)
                return a.first < b.first;
            return a.second > b.second;
            });
        m[kv.second] = kv.first;
    }

    for (auto& kv : m) {
        int cnt = 2 < um[kv.second].size() ? 2 : um[kv.second].size();
        for (int i = 0; i < cnt; i++) {
            answer.push_back(um[kv.second][i].first);
        }
    }

    return answer;
}