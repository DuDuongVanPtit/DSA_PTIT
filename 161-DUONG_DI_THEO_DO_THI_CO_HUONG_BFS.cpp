#include <bits/stdc++.h> 
    using namespace std;
    bool visited[1005];
    int parent[1005];
    void BFS(int u, vector <int> v[], int end){
        queue <int> q;
        q.push(u);
        visited[u] = true;
        while(!q.empty()){
            int tmp = q.front();
            q.pop();
            for(int x : v[tmp]){
                if(!visited[x]){
                    parent[x] = tmp;
                    q.push(x);
                    visited[x] = true;
                }
            }
        }
    }
    
    int main(){
        int t;
        cin >> t;
        while(t--){
            int vertex, edge, begin, end;
            cin >> vertex >> edge >> begin >> end;
            vector <int> v[1005];
            for(int i = 0; i < edge; i++){
                int first, end;
                cin >> first >> end;
                v[first].push_back(end);
            }
            BFS(begin, v, end);
            if(!parent[end]){
                cout << "-1";
            }
            else{
                vector <int> v;
                int tmp = end;
                v.push_back(tmp);
                while(tmp != begin){
                    v.push_back(parent[tmp]);
                    tmp = parent[tmp];
                }
                reverse(v.begin(), v.end());
                for(int x : v){
                    cout << x << " ";
                }
            }
            cout << endl;
            memset(visited, false, sizeof(visited));
            memset(parent, false, sizeof(parent));
        }
    }