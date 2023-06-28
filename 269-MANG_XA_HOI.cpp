#include <bits/stdc++.h> 
    using namespace std;
    int sz[1005];
    int parent[1005];
    void khoitao(int n){
        for(int i = 1; i <= n; i++){
            parent[i] = i;
            sz[i] = 1;
        }
    }
    int Find(int u){
        if(u == parent[u]){
            return u;
        }
        else{
            parent[u] = Find(parent[u]);
            return parent[u];
        }
    }
    bool Union(int u, int v){
        u = Find(u);
        v = Find(v);
        if(u == v){
            return false;
        }
        else{
            if(sz[u] < sz[v]){
                parent[u] = v;
                sz[v] += sz[u];
            }
            else{
                parent[v] = u;
                sz[u] += sz[v];
            }
        }
        return true;
    }

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n, m; cin >> n >> m;
            vector <pair<int, int>> p;
            for(int i = 0; i < m; i++){
                int x, y; cin >> x >> y;
                p.push_back({x, y});
            }
            khoitao(n);
            int ok = 1;
            for(auto it : p){
                Union(it.first, it.second);
            }
            for(int i = 1; i <= n; i++){
                cout << parent[i] << " ";
            }
            cout << endl;
            memset(parent, 0, sizeof(parent));
            memset(sz, 0, sizeof(sz));
        }
    }