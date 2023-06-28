#include <bits/stdc++.h>
    using namespace std;
    bool visited[1005];
    void DFS(int u, vector <int> v[]){
        visited[u] =  true;
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
            int bbr[1005] = {0}, bbv[1005] = {0};
            for(int i = 0; i < edge; i++){
                int first, end;
                cin >> first >> end;
                bbr[first]++; bbv[end]++;
                v[first].push_back(end);
                v[end].push_back(first);
            }
            DFS(1, v);
            int ok1 = 1, ok2 = 1;
            for(int i = 1; i <= vertex; i++){
                if(!visited[i]){
                    ok1 = 0;
                    break;
                }
                if(bbv[i] != bbr[i]){
                    ok2 = 0;
                    break;
                }
            }
            if(ok1 && ok2){
                cout << "1";
            }
            else{
                cout << "0";
            }
            cout << endl;
            memset(visited, false, sizeof(visited));
        } 
    }