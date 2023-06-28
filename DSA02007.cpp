#include <bits/stdc++.h>
	using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			string s; cin >> s;
			for(int i = 0; i < s.size(); i++){
				if(n == 0) break;
				char c = '0';
				for(int j = i + 1; j < s.size(); j++){
					c = max(c, s[j]);
				}
				if(c <= s[i]) continue;
				string smax = s;
				for(int j = i + 1; j < s.size(); j++){
					if(s[j] == c){
						string tmp = s;
						swap(tmp[i], tmp[j]);
						smax = max(smax, tmp);
					}
				}
				s = smax;
				n--;
			}
			cout << s << endl;
		}
	}

	
	
	
