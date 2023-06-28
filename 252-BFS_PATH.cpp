#include <bits/stdc++.h>
    using namespace std;
    bool visited [1005];
    int parent[1005];
    void BFS(int begin, vector <int> ke[], int end){
        queue <int> q;
        q.push(begin);
        visited[begin] = true;
        while(!q.empty()){
            int t = q.front();
            q.pop();
            for(int x : ke[t]){
                if(!visited[x]){
                    parent[x] = t;
                    visited[x] = true;
                    q.push(x);
                }
            }
        }
    }

    int main(){
        int t;
        cin >> t;
        while(t--){
            int vertex, edge, bg, end;
            cin >> vertex >> edge >> bg >> end;
            vector <int> ke[vertex + 1];
            for(int i = 0; i < edge; i++){
                int b, e;
                cin >> b >> e;
                ke[b].push_back(e);
                ke[e].push_back(b);
            }
            BFS(bg, ke, end);
            if(!visited[end]){
                cout << "-1";
            }
            else{
                vector <int> path;
                int t = end; path.push_back(end);
                while(parent[t] != bg){
                    path.push_back(parent[t]);
                    t = parent[t];
                }
                path.push_back(bg);
                reverse(path.begin(), path.end());
                for(int x : path){
                    cout << x  << " ";
                }
            }
            cout << endl;
            memset(visited, false, sizeof(visited));
            memset(parent, 0, sizeof(parent));
        }
    }