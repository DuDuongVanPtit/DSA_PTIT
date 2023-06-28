#include <bits/stdc++.h>
	using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			string s; cin >> s;
			string ans = "";
			ans += s[0];
			for(int i = 1; i < s.size(); i++){
				if(s[i - 1] == s[i]) ans += '0';
				else ans += '1';
			}
			cout << ans << endl;
		}
	}
