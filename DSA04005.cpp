#include <bits/stdc++.h>
	using namespace std;
	using ll = long long;
	ll n, k, f[94];
	void F(){
		f[0] = 0; f[1] = 1;
		for(int i = 2; i <= 92; i++) f[i] = f[i - 1] + f[i - 2];
	}
	void solve(ll n, ll k){
		if(n == 1){cout << "A\n"; return;}
		if(n == 2){cout << "B\n"; return;}
		if(k <= f[n - 2]) solve(n - 2, k);
		else solve(n - 1, k - f[n - 2]);
		
	}
	int main(){
		F();
		int t; cin >> t; 
		while(t--){
			cin >> n >> k;
			solve(n, k);
		}
	}
