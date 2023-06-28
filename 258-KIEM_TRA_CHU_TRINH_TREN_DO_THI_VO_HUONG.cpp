#include<bits/stdc++.h>
using namespace std;

	bool visited[1005];
	int parent[1005];

	bool DFS(int u, vector<int> v[]){
		visited[u] = true;
		for(int x : v[u]){
			if(!visited[x]){
                parent[x] = u;
				if(DFS(x, v)){
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

	int main(){
		int t;
		cin >> t;
		while(t--){
			int vertex, edge;
			cin >> vertex >> edge;
			vector <int> v[1005];
			for(int i = 0; i < edge; i++){
				int first, end;
				cin >> first >> end;
				v[first].push_back(end);
				v[end].push_back(first);
			}
            int ok = 0;
            for(int i = 1; i <= vertex; i++){
                if(!visited[i]){
                    if(DFS(i, v)){
                        ok = 1;
                    }
                }
            }
            if(ok){
                cout << "YES";
            }
            else{
                cout << "NO";
            }
            cout << endl;
            memset(parent, 0, sizeof(parent));
            memset(visited, false, sizeof(visited));
		}
	}