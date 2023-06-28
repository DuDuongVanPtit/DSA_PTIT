#include <bits/stdc++.h>
	using namespace std;
	typedef pair <int, int> ii;
	
	void Dijkstra(int u, vector <ii> adj[], int v){
		priority_queue<ii, vector<ii>, greater<ii>> q;
		vector<int> d(v + 1, 1e9);
		q.push({0, u});
		d[u] = 0;
		while(!q.empty()){
			ii tmp = q.top(); q.pop();
			int dis = tmp.first, dis2 = tmp.second;
			if(dis > d[dis2]){
				continue;
			}
			for(ii e : adj[dis2]){
				int v = e.first, w = e.second;
				if(d[v] > d[dis2] + w){
					d[v] = d[dis2] + w;
					q.push({d[v], v});
				}
			}
		}
		for(int i = 1; i <= v; i++) cout << d[i] << " ";
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int v, e, u;
			cin >> v >> e >> u;
			vector <ii> adj[1005];
			for(int i = 1; i <= e; i++){
				int x, y, w; cin >> x >> y >> w;
				adj[x].push_back({y, w});
				adj[y].push_back({x, w});
			}
			Dijkstra(u, adj, v);
			cout << endl;
		}
	}
