#include <bits/stdc++.h>
	using namespace std;
	int n, min_val = 1e9, a[15], compare[15][15];
	vector <string> v;
	bool used[15];
	void Try(int i){
		for(int j = 0; j < n; j++){
			if(!used[j]){
				used[j] = true;
				a[i] = j;
				if(i == n - 1){
					int sum = 0;
					for(int i = 0; i < n - 1; i++){
						sum += compare[a[i]][a[i + 1]];
					}
					min_val = min(min_val, sum);
				}
				else Try(i + 1);
				used[j] = false;
			}
		}
	}
	int main(){
		cin >> n;
		for(int i = 1; i <= n; i++){
			string s; cin >> s;
			v.push_back(s);
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				compare[i][j] = 0;
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				int sum = 0;
				for(int k = 0; k < v[i].size(); k++){
					for(int p = 0; p < v[j].size(); p++){
						if(v[i][k] == v[j][p]){
							sum++;
							break;
						}
					}
				}
				compare[i][j] = compare[j][i] = sum;
			}
		}
		Try(0);
		cout << min_val << endl;
	}
