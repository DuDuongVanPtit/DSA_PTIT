#include <bits/stdc++.h>
	using namespace std;
	int n, k, a[35], min_val = 1e9, ok = 0;
	vector <int> v;
	void Try(int i, int sum){
		if(sum == k){
			ok = 1;
			int tmp = v.size();
			min_val = min(min_val, tmp);
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
		cin >> n >> k;
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		Try(0, 0);
		if(ok) cout << min_val << endl;
		else cout << "-1";
		v.clear();
	}
