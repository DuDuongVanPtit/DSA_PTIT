#include <bits/stdc++.h> 
    using namespace std;
    bool visited[1005];
    void DFS(int u, vector <int> v[], int X, int Y){
        visited[u] = true;
        for(int x : v[u]){
            if(X == u && Y == x || X == x && Y == u){
                continue;
            }
            if(!visited[x]){
                DFS(x, v, X, Y);
            }
        }
    }
    
    int main(){
        int t;
        cin >> t;
        while(t--){
            vector<pair<int, int>> dscanh;
            int vertex, edge;
            cin >> vertex >> edge;
            vector <int> v[1005];
            for(int i = 0; i < edge; i++){
                int first, end;
                cin >> first >> end;
                dscanh.push_back({first, end});
                v[first].push_back(end);
                v[end].push_back(first);
            }
            int cnt = 0;
            for(auto it : dscanh){
                cnt++;
                int c = 0;
                int x = it.first, y = it.second;
                memset(visited, false, sizeof(visited));
                for(int i = 1; i <= vertex; i++){
                    if(!visited[i]){
                        c++;
                        DFS(i, v, x, y);
                    }
                }
                if(c >= 2){
                    cout << x << " " << y << " ";
                }
            }
            cout << endl;
            memset(visited, false, sizeof(visited));
        }
    }