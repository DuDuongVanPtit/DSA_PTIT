#include <bits/stdc++.h>
    using namespace std;
    bool visited[1005];
    int parent[1005];
    
    bool DFS(int u, vector <int> v[]){
        visited[u] = true;
        for(int x : v[u]){
            if(!visited[x]){
                parent[x] = u;
                if(DFS(x, v) == true){
                    return true;
                }
            }
            else{
                if(x != parent[u]){
                    return true;
                }
            }
        }
        return false;
    }
    bool check(int n, int vertex, vector <int> v[]){
        if(vertex < n){
            return false;
        }
        if(DFS(1, v) == true){
            return false;
        }
        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                return false;
            }
        }
        return true;
    }

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n; cin >> n;
            vector <int> v[1005];
            set <int> se;
            for(int i = 0; i < n - 1; i++){
                int x, y; cin >> x >> y;
                v[x].push_back(y);
                v[y].push_back(x);
                se.insert(x); se.insert(y);
            }
            if(check(n, se.size(), v)){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
            memset(visited, false, sizeof(visited));
            memset(parent, 0, sizeof(parent));
        }
    }