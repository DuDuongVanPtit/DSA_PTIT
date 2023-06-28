#include <bits/stdc++.h> 
    using namespace std;
    bool visited[1005];

    void BFS(int u, vector <int> v[]){
        queue <int> q;
        q.push(u);
        visited[u] = true;
        while(!q.empty()){
            int tmp = q.front();
            q.pop();
            cout << tmp << " ";
            for(int x : v[tmp]){
                if(!visited[x]){
                    q.push(x);
                    visited[x] = true;
                }
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
                int first, second;
                cin >> first >> second;
                v[first].push_back(second);
                v[second].push_back(first);
            }
            BFS(u, v);
            cout << endl;
            memset(visited, false, sizeof(visited));
        }
    }