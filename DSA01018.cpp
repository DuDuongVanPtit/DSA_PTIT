#include <bits/stdc++.h>
	using namespace std;

	int main(){
		int t; cin >> t;
		while(t--){
			int n, k; cin >> n >> k;
			int a[k];
			for(int i = 1; i <= k; i++){
				cin >> a[i];
			}
			int i = k;
			while(i >= 1 && a[i] == a[i - 1] + 1){
				i--;
			}
			a[i] -= 1;
			if(a[i] == 0){
				for(int i = n - k + 1; i <= n; i++) cout << i << " ";
			}
			else{
				for(int j = i + 1; j <= k; j++) a[j] = n - k + j;
				for(int i = 1; i <= k; i++) cout << a[i] << " ";
			}
			cout << endl;
		}
		
		
	}
