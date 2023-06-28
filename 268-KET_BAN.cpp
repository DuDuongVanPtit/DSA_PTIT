#include <bits/stdc++.h>
    using namespace std;
    int parent[100005], sz[100005];
    int max_val = -1e9;
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
    void Union(int u, int v){
        u = Find(u);
        v = Find(v);
        if(u == v) return;
        else{
            if(sz[u] < sz[v]){
                sz[v] += sz[u];
                parent[u] = v;
                max_val = max(max_val, sz[v]);
            }
            else{
                sz[u] += sz[v];
                parent[v] = u;
                max_val = max(max_val, sz[u]);
            }
        }
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n, m;
            cin >> n >> m;
            khoitao(n);
            while(m--){
                int bg, en; cin >> bg >> en;
                Union(bg, en);
            }
            cout << max_val << endl;
            max_val = -1e9;
        }
    }