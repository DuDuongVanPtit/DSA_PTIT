#include <bits/stdc++.h>
	using namespace std;
	int n;
	vector <int> x(25);
	vector <vector <int>> ans;
	void Try(int i, int sum){
		for(int j = x[i - 1]; j >= 1; j--){
			if(sum + j <= n){
				x[i] = j;
				sum += j;
				if(sum == n){
					vector <int> tmp;
					for(int k = 1; k <= i; k++) tmp.push_back(x[k]);
					ans.push_back(tmp);
				}
				else{
					Try(i + 1, sum);
				}
				sum -= j;
			}
		}
	}
	int main(){
		int t; cin >> t;
		while(t--){
			x.clear(); ans.clear();
			cin >> n;
			x[0] = n;
			Try(1, 0);
			cout << ans.size() << endl;
			for(auto i : ans){
				cout << "(";
				for(int j = 0; j < i.size(); j++){
					cout << i[j]; if(j < i.size() - 1) cout << " ";
				}
				cout << ") ";
			}
			cout << endl;
		}
	}
