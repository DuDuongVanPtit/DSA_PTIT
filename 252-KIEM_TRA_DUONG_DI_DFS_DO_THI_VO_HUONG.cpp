#include <bits/stdc++.h>
    using namespace std;
    bool visited [1005];
    int parent[1005];
    void DFS(int begin, vector <int> ke[], int end){
        visited[begin] = true;
        if(begin == end){
            return;
        }
        for(int x : ke[begin]){
            if(!visited[x]){
                parent[x] = begin;
                DFS(x, ke, end);
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
            DFS(bg, ke, end);
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