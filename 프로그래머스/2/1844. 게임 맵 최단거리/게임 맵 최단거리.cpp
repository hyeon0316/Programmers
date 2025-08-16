#include<vector>
#include<queue>
using namespace std;


int solution(vector<vector<int> > maps)
{
    int answer = -1;
    int yMax = maps.size();
    int xMax = maps[0].size();
    vector<vector<int>> visited(yMax, vector<int>(xMax, 0));
    queue<pair<int,int>> q;
    q.push({0,0});
    visited[0][0] = 1;
    while(!q.empty()){
        pair<int, int> f = q.front();
        q.pop();
        
        int y = f.first;
        int x = f.second;
           
        if(y == yMax - 1 && x == xMax - 1){
            answer = visited[y][x];
            break;
        }
            
        int curDist = visited[y][x];     
        if(y + 1 < yMax && maps[y + 1][x] == 1 && !visited[y + 1][x]){
            q.push({y + 1, x});
            visited[y + 1][x] = 1 + curDist;
        }
        
        if(x + 1 < xMax && maps[y][x + 1] == 1 && !visited[y][x + 1]){
            q.push({y, x + 1});
            visited[y][x + 1] = 1 + curDist;
        }
        
        if(y - 1 >= 0 && maps[y - 1][x] == 1 && !visited[y - 1][x]){
            q.push({y - 1, x});
            visited[y - 1][x] = 1 + curDist;
        }
        
        if(x - 1 >= 0 && maps[y][x - 1] == 1 && !visited[y][x - 1]){
            q.push({y, x - 1});
            visited[y][x - 1] = 1 + curDist;
        }
    }
    
    return answer;
}