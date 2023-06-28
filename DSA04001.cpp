#include <bits/stdc++.h>
	using namespace std;
	using ll = long long;
	ll n, k, mod = 1e9 + 7;
	void powmode(){
		ll ans = 1;
		long long a = 1;
		while(k){
			if(k % 2 == 1){
				ans = (ans % mod * n % mod) % mod;
			}
			n = (n % mod * n % mod) % mod;
			k /= 2;
		}
		cout << ans << endl;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			cin >> n >> k;
			powmode();
		}
	}
