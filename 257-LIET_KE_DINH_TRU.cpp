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
            int vertex, edge;
            cin >> vertex >> edge;
            vector <int> v[1005];
            for(int i = 0; i < edge; i++){
                int first, end;
                cin >> first >> end;
                v[first].push_back(end);
                v[end].push_back(first);
            }
            for(int i = 1; i <= vertex; i++){
                memset(visited, false, sizeof(visited));
                visited[i] = true;
                int cnt = 0;
                for(int i = 1; i <= vertex; i++){
                    if(!visited[i]){
                        cnt++;
                        DFS(i, v);
                    }
                }
                if(cnt >= 2){
                    cout << i << " ";
                }
            }
            cout << endl;
            memset(visited, false, sizeof(visited));
        }
    }