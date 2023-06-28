#include <bits/stdc++.h>
	using namespace std;
	using ll = long long;
	int n, k, a[10005];
	int main(){
		int t; cin >> t;
		while(t--){
			cin >> n >> k;
			for(int i = 0; i < n; i++) cin >> a[i];
			sort(a, a + n);
			ll sum = 0;
			for(int i = 0; i < n; i++){
				ll it = lower_bound(a + i + 1, a + n, a[i] + k) - a - i - 1;
				sum += it;
			}
			cout << sum << endl;
		}
	}
