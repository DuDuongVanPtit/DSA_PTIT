#include <bits/stdc++.h> 
    using namespace std;
    bool visited[1005];
    void DFS(int u, vector <int> v[]){
        visited[u] = true;
        for(int x : v[u]){
            if(!visited[x]){
                DFS(x, v);
            }
        }
    }
    
    int main(){
        int t;
        cin >> t;
        while(t--){
            int vertex, edge, u;
            cin >> vertex >> edge >> u;
            vector <int> v[vertex + 1];
            for(int i = 0; i < edge; i++){
                int first, end;
                cin >> first >> end;
                v[first].push_back(end);
                v[end].push_back(first);
            }
            int ans = 0;
            for(int i = 1; i <= vertex; i++){
                if(visited[i] == false){
                    DFS(u, v);
                    ans++;
                }
            }
            cout << ans << endl;
            memset(visited, false, sizeof(visited));
        }
    }