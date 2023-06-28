#include <bits/stdc++.h>
    using namespace std;
    int parent[1005], sz[1005];
    void khoitao(int vertex){
        for(int i = 1; i <= vertex; i++){
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
        if(u == v) return false;
        else{
            if(sz[u] < sz[v]){
                sz[v] += sz[u];
                parent[u] = v;
            }
            else{
                sz[u] += sz[v];
                parent[v] = u;
            }
        }
        return true;
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            int vertex, edge;
            cin >> vertex >> edge;
            khoitao(vertex);
            int ok = 1;
            while(edge--){
                int bg, en;
                cin >> bg >> en;
                if(!Union(bg, en)){
                    ok = 0;
                }
            }
            if(ok){
                cout << "NO\n";
            }
            else{
                cout << "YES\n";
            }
            memset(parent, 0, sizeof(parent));
            memset(sz, 0, sizeof(sz));
        }
    }