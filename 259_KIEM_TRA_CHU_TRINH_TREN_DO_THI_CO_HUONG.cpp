#include<bits/stdc++.h>
    using namespace std;

	bool visited[1005];
	int color[1005];// mau trang la bang 0: chua xet, mau xam la bang 1: dang xet
	// mau den la bang 2: da xet xong
	bool DFS(int u, vector<int> v[]){
		visited[u] = true;
		color[u] = 1;
		for(int x : v[u]){
			if(!visited[x]){
				if(color[x] == 0){
                    if(DFS(x, v)){
                        return true; 
                    }
                }
			}
            else{
                if(color[x] == 1){
                    return true;
                }
            }
		}
        color[u] = 2;
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
            memset(color, 0, sizeof(color));
            memset(visited, false, sizeof(visited));
		}
	}