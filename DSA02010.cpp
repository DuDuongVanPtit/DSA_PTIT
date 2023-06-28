#include <bits/stdc++.h>
	using namespace std;
	int n, k, a[20];
	vector <int> v;
	set <vector <int>> ans;
	void Try(int i, int sum){
		if(sum == k){
			ans.insert(v);
			return;
		}
		for(int j = i; j < n; j++){
			if(sum + a[j] <= k){
				v.push_back(a[j]);
				Try(j, sum + a[j]);
			}
			else return;
			v.pop_back();
		}
	}
	int main(){
		int t; cin >> t;
		while(t--){
		    v.clear(); ans.clear();
			cin >> n >> k;
			for(int i = 0; i < n; i++) cin >> a[i];
			sort(a, a + n);
			Try(0, 0);
			if(ans.size() == 0) cout << "-1";
			else{
				for(auto x : ans){
					cout << "[";
					for(int i = 0; i < x.size(); i++){
						cout << x[i]; if(i < x.size() - 1) cout << " ";
					}
					cout << "]";
				}
			}
			cout << endl;
		}
	}
