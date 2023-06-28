#include <bits/stdc++.h>
	using namespace std;
	bool prime[100000];
	int a[25], n;
	vector <int> v;
	set <vector<int>> ans;
	void sang(){
		for(int i = 0; i < 100000; i++) prime[i] = true;
		prime[0] = prime[1] = false;
		for(int i = 2; i < sqrt(100000); i++){
			if(prime[i]){
				for(int j = i * i; j < 100000; j += i){
					prime[j] = false;
				}
			}
		}
	}
	void Try(int i, int sum){
		for(int j = i; j < n; j++){
			sum += a[j];
			v.push_back(a[j]);
			if(prime[sum]){
				ans.insert(v);
			}
			Try(j + 1, sum);
			v.pop_back();
			sum -= a[j];
		}
	}
	int main(){
		sang();
		int t; cin >> t;
		while(t--){
			ans.clear(); v.clear();
			cin >> n;
			for(int i = 0; i < n; i++){
				cin >> a[i];
			}
			sort(a, a + n, greater<int>());
			Try(0, 0);
			for(auto i : ans){
				for(auto j : i){
					cout << j << " ";
				}
				cout << endl;
			}
		}
	}
