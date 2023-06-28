#include <bits/stdc++.h>
    using namespace std;
    int sz[105], parent[105];
    void khoitao(int v){
        for(int i = 1; i <= v; i++){
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
        if(sz[u] < sz[v]){
            parent[u] = v;
            sz[v] += sz[u];
        }
        else{
            parent[v] = u;
            sz[u] += sz[v];
        }
    }
    struct edge{
        int x, y, w;
    };
    bool cmp(edge a, edge b){
        if(a.w != b.w){
            return a.w < b.w;
        }
        if(a.y != b.y){
            return a.y < b.y;
        }
        return a.x < b.x;
    }
    void Kruskal(vector <edge> E, int v){
        vector <edge> MST;
        int d = 0;
        for(auto e : E){
            if(MST.size() == v - 1){
                break;
            }
            if(Union(e.x, e.y)){
                MST.push_back(e);
                d += e.w;
            }

        }
        cout << d << endl;
    }
    int main(){
        int t; cin >> t;
        while(t--){
            vector <edge> E;
            int v, e; cin >> v >> e;
            khoitao(v);
            for(int i = 0; i < e; i++){
                int x, y, w; cin >> x >> y >> w;
                E.push_back({x, y, w});
                E.push_back({y, x, w});
            }
            sort(E.begin(), E.end(), cmp);
            Kruskal(E, v);
        }
    }