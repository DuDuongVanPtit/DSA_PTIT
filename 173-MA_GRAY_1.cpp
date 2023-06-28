#include <bits/stdc++.h>
	using namespace std;
	
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			vector <string> a(2000, "");
			a[0] = "0"; a[1] = "1";
			for(int i = 2; i <= n; i++){
				int x = pow(2, i);
				for(int j = 0; j < x/2; j++){
					string tmp1 = "", tmp2 = "";
					tmp1 = "0" + a[j];
					tmp2 = "1" + a[j];
					a[j] = tmp1;
					a[x - j - 1] = tmp2;
				}
			} 
			int i = 0;
			while(a[i].size() != 0){
				cout << a[i] << " ";
				i++;
			}
			cout << endl;
		}
	}
