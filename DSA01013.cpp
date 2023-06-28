#include <bits/stdc++.h>
	using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			string s; cin >> s;
			string ans = "";
			ans += s[0];
			for(int i = 1; i < s.size(); i++){
				int c = 0;
				for(int j = i; j >= 0; j--){
					if(s[j] == '1'){
						c++;
					}
				}
				if(c % 2 == 0) ans += '0';
				else ans += '1';
			}
			cout << ans << endl;
		}
	}
