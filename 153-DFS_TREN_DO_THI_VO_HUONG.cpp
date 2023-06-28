#include <bits/stdc++.h> 
    using namespace std;
    bool visited[1005];
    void DFS(int begin, vector <int> v[]){
        cout << begin << " ";
        visited[begin] = true;
        for(int x : v[begin]){
            if(!visited[x]){
                DFS(x, v);
            }
        }
    }
    
    int main(){
        int t;
        cin >> t;
        while(t--){
            int vertex, edge, begin;
            cin >> vertex >> edge >> begin;
            
            vector <int> v[vertex + 1];
            for(int i = 0; i < edge; i++){
                int first, last;
                cin >> first >> last;
                v[first].push_back(last);
                v[last].push_back(first);
            }
            for(int i = 1; i <= vertex; i++){
                sort(v[i].begin(), v[i].end());
            }
            DFS(begin, v);
            cout << endl;
            memset(visited, false, sizeof(visited));
        }
    }