#include <bits/stdc++.h>
	using namespace std;
	vector <char> v;
	string s;
	int n;
	void Try(int i){
		for(int j = i; j < s.size(); j++){
			v.push_back(s[j]);
			if(s.size()){
				for(char c : v) cout << c; cout << " ";
			}
			Try(j + 1);
			v.pop_back();
		}
	}
	int main(){
		v.clear();
		int t; cin >> t; 
		while(t--){
			cin >> n >> s;
			sort(s.begin(), s.end());
			Try(0); cout << endl;
		}
	}
