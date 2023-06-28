#include <bits/stdc++.h>
	using namespace std;
	bool used[1000];
	void Hamilton(int i, vector <int> ke[], int v, vector <int> path, bool &check){
		if(path.size() == v){
			check = true;
			return;
		}
		for(int x : ke[i]){
			if(used[x] == false){
				used[x] = true;
				path.push_back(x);
				Hamilton(x, ke, v, path, check);
				path.pop_back();
				used[x] = false;
			}
		}
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int v, e; cin >> v >> e;
			vector <int> ke[1000];
			while(e--){
				int x, y; cin >> x >> y;
				ke[x].push_back(y);
				ke[y].push_back(x);
			}
			bool check = false;
			for(int i = 1; i <= v; i++){
				vector <int> path;
				path.push_back(i); used[i] = true;
				Hamilton(i, ke, v, path, check);
				memset(used, false, sizeof(used));
			}
			if(check){
				cout << "1";
			}
			else{
				cout << "0";
			}
			cout << endl;
		}
	}
