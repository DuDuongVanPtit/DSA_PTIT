#include <bits/stdc++.h> 
    using namespace std;
    bool visited[1005];
    int parent[1005];
    void DFS(int u, int t, vector <int> v[]){
        stack <int> st;
        st.push(u);
        visited[u] = true;
        while(!st.empty()){
            int tmp = st.top();
            st.pop();
            for(int x : v[tmp]){
                if(!visited[x]){
                    parent[x] = tmp;
                    visited[x] = true;
                    if(x == t){
                        return;
                    }
                    st.push(x);
                    st.push(tmp);
                    st.push(x);
                    break;
                }
            }
        } 
        while(!st.empty()){
            st.pop();
        }

    }
    
    int main(){
        int t;
        cin >> t;
        while(t--){
            int vertex, edge, u, t;
            cin >> vertex >> edge >> u >> t;
            vector <int> v[vertex + 1];
            for(int i = 0; i < edge; i++){
                int first, end;
                cin >> first >> end;
                v[first].push_back(end);
            }
            DFS(u, t, v);
            if(!visited[t]){
                cout << "khong tim thay duong di tu dinh u den t";
            }
            else{
                vector <int> save;
                while(u != t){
                    save.push_back(parent[t]);
                    t = parent[t];
                }
                reverse(save.begin(), save.end());
                for(int x : save){
                    cout << x << " ";
                }
            }
            memset(parent, 0, sizeof(visited));
            memset(visited, false, sizeof(visited));
        }
    }