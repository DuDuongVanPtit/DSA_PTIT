#include <bits/stdc++.h>
	using namespace std;
	int n, k, s;
	int ans[30];
	int c = 0;
	void Try(int i){
		for(int j = ans[i - 1] + 1; j <= n - k + i; j++){
			ans[i] = j;
			if(i == k){
				int tong = 0;
				for(int i = 1; i <= k; i++) tong += ans[i];
				if(tong == s) c++;
			}
			else Try(i + 1);
		}
	}
	int main(){
		while(1){
			cin >> n >> k >> s;
			if(n + s + k == 0) break;
			Try(1);
			cout << c << endl; c = 0;
		}
	}
