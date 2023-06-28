#include <bits/stdc++.h>
	using namespace std;
	int prime[205], n, p, s;
	vector <int> P;
	vector <vector <int>> ans;
	void sang(){
		for(int i = 2; i <= 200; i++) prime[i] = 1;
		for(int i = 2; i <= sqrt(200); i++){
			if(prime[i]){
				for(int j = i * i; j <= 200; j += i){
					prime[j] = 0;
				}
			}
		}
		for(int i = 2; i <= 200; i++){
			if(prime[i]) P.push_back(i);
		}
	}
	void Try(int i, int sum, vector <int> lst){
		if(lst.size() == n){
			if(sum == s) ans.push_back(lst);
			return;
		}
		for(int j = i; j < P.size(); j++){
			if(sum + P[j] <= s){
				lst.push_back(P[j]);
				Try(j + 1, sum + P[j], lst);
				lst.pop_back();
			}
			else return;
		}
	}
	int main(){
		sang();
		int t;cin >> t;
		while(t--){
			ans.clear();
			cin >> n >> p >> s;
			for(int i = 0; i < P.size(); i++){
				if(P[i] > p){
					Try(i, 0, {});
					break;
				}
			}
			sort(ans.begin(), ans.end()); cout << ans.size() << endl;
			for(auto i : ans){
				for(auto j : i) cout << j << " ";
				cout << endl;
			}
		}
	}
