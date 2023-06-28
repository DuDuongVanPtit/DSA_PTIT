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
            }
            bool check = true;
            for(int i = 1; i <= vertex; i++){
                memset(visited, false, sizeof(visited));
                DFS(i, v);
                for(int i = 1; i <= vertex; i++){
                    if(visited[i] == false){
                        check = false;
                    }
                }
            }
            if(check){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
            memset(visited, false, sizeof(visited));
        }
    }