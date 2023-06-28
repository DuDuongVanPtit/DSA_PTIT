#include <bits/stdc++.h>
	using namespace std;
	int n, k, a[25];
	vector <int> v;
	void Try(int i){
		for(int j = i; j < n; j++){
			v.push_back(a[j]);
			if(v.size() == k){
				for(int x : v) cout << x << " ";
				cout << endl;
			}
			else Try(j + 1);
			v.pop_back();
		}
	}
	int main(){
		int t; cin >> t;
		while(t--){
			v.clear();
			cin >> n >> k;
			for(int i = 0; i < n; i++){
				cin >> a[i];
			}
			sort(a, a + n);
			Try(0);
		}
	}
