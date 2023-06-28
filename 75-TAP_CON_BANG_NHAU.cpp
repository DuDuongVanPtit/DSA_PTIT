#include <bits/stdc++.h>
	using namespace std;
	
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			int  sum = 0, a[n];
			for(int i = 0; i < n; i++){
				cin >> a[i];
				sum += a[i];
			}
			if(sum % 2 != 0){
				cout << "NO\n";
			}
			else{
				sum /= 2;
				vector <int> v(sum + 1, 0);
				v[0] = 1;
				for(int i = 0; i < n; i++){
					for(int j = sum; j >= a[i]; j--){
						if(v[j - a[i]]){
							v[j] = 1;
						}
					}
				}
				if(v[sum]){
					cout << "YES\n";
				}
				else{
					cout << "NO\n";
				}
			}
		}
	}
