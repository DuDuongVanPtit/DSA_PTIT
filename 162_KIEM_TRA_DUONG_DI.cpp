#include <bits/stdc++.h> 
    using namespace std;
    bool visited[1005];
    int ok[1005];
    void DFS(int u, vector <int> v[],int cnt){
        visited[u] = true;
        ok[u] = cnt;
        for(int x : v[u]){
            if(!visited[x]){
                DFS(x, v, cnt);
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
            int cnt = 0;
            for(int i = 1; i <= vertex; i++){
                if(!visited[i]){
                    cnt++;
                    DFS(i, v, cnt);
                }
            }
            int q;
            cin >> q;
            while(q--){
                int begin, end;
                cin >> begin >> end;
                if(ok[begin] == ok[end]){
                    cout << "YES";
                }
                else{
                    cout << "NO";
                }
                cout << endl;
            }
            memset(ok, false, sizeof(ok));
            memset(visited, false, sizeof(visited));
        }
    }