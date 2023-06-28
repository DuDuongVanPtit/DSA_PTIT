#include <bits/stdc++.h>
	using namespace std;
	int n, a[20];
	vector <int> v;
	set <vector <int>> ans;
	void Try(int i, int sum){
		for(int j = i; j < n; j++){
			v.push_back(a[j]);
			sum += a[j];
			if(sum % 2 == 1){
				ans.insert(v);
			}
			Try(j + 1, sum);
			v.pop_back();
			sum -= a[j];
		}
	}
	int main(){
		int t; cin >> t;
		while(t--){
		    v.clear(); ans.clear();
			cin >> n;
			for(int i = 0; i < n; i++) cin >> a[i];
			sort(a, a + n, greater <int>());
			Try(0, 0);
			for(auto x : ans){
				for(auto y : x){
					cout << y << " ";
				}
				cout << endl;
			}
		}
	}
