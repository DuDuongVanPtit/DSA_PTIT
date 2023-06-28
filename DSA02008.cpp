#include <bits/stdc++.h>
	using namespace std;
	bool used[1005];
	int n, k, a[1005][1005], A[1005], cnt = 0;
	vector <int> v[100];
	void Try(int i){
		for(int j = 1; j <= n; j++){
			if(!used[j]){
				A[i] = j;
				used[j] = true;
				if(i == n){
					int sum = 0;
					int c = 0;
					for(int i = 1; i <= n; i++){
						sum += a[c][A[i] - 1];
						c++;
					}
					if(sum == k){
						for(int i = 1; i <= n; i++) v[cnt].push_back(A[i]);
						cnt++;
					}
				}
				else Try(i + 1);
				used[j] = false;
			}
		}
	}
	int main(){
		cin >> n >> k;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		Try(1);
		cout << cnt << endl;
		for(int i = 0; i < cnt; i++){
			for(int j = 0; j < n; j++){
				cout << v[i][j] << " ";
			}
			cout << endl;
		}
	}
