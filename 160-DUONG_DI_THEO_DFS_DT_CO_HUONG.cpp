#include <bits/stdc++.h> 
    using namespace std;
    bool visited[1005];
    void DFS(int u, int v, vector <int> ve[]){
        cout << u << " ";
        visited[u] = true;
        stack <int> st;
        st.push(u);
        int check = 0;
        for(int x : ve[u]){
            if(!visited[x]){
                DFS(x, v, ve);
            }
        }
    }
    
    int main(){
        int t;
        cin >> t;
        while(t--){
            int vertex, edge, u, v;
            cin >> vertex >> edge >> u >> v;
            vector <int> ve[vertex + 1];
            for(int i = 0; i < edge; i++){
                int first, end;
                cin >> first >> end;
                ve[first].push_back(end);
            }
            for(int i = 1; i <= vertex; i++){
                sort(ve[i].begin(), ve[i].end());
            }
            DFS(u, v, ve);
            cout << endl;
            memset(visited, false, sizeof(visited));
        }
    }