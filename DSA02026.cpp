#include <bits/stdc++.h>
	using namespace std;
	int a[100], n = 0;
	char A[100];
	vector <string> ketqua;
	void Try(int i){
		for(int j = 0; j <= 9; j++){
			a[i] = j;
			if(i == n){
				int k = 1; string kt = ""; for(int l = 0; l < 7; l++) kt = kt + A[l];
				for(int q = 0; q < 7; q++){
					if(kt[q] == '?'){
						if(k > n) break;
						kt[q] = a[k] + 48; k++;	
					}
				}
				string x = "", y = "", ans = "";
				if(x[0] == '0' || y[0] == '0' || ans[0] == '0') continue;
				for(int l = 0; l < 7; l++){
					if(l <= 1) x = x + kt[l];
					else if(l > 2 && l <= 4) y = y + kt[l];
					else if (l >= 5) ans = ans + kt[l];
				}
				if(kt[2] == '+'){
					if(stoi(x) + stoi(y) == stoi(ans)) ketqua.push_back(x + " + " + y + " = " + ans);
				}
				else if(kt[2] == '-'){
					if(stoi(x) - stoi(y) == stoi(ans)) ketqua.push_back(x + " - " + y + " = " + ans);
				}
				else if(kt[2] == '*'){
					if(stoi(x) * stoi(y) == stoi(ans)) ketqua.push_back(x + " * " + y + " = " + ans);
				}
				else{
					if(stoi(y) != 0 && stoi(x) % stoi(y) == 0 && stoi(x) / stoi(y) == stoi(ans)) ketqua.push_back(x + " / " + y + " = " + ans);
				}
			}
			else Try(i + 1);
		}
	}
	void Try1(int i){
		for(int j = 0; j <= 9; j++){
			a[i] = j;
			if(i == n){
				int k = 1; string kt = ""; for(int l = 0; l < 7; l++) kt = kt + A[l];
				for(int q = 0; q < 7; q++){
					if(kt[q] == '?' && q != 2){
						if(k > n) break;
						kt[q] = a[k] + 48; k++;
					}
				}
				string x = "", y = "", ans = "";
				if(x[0] == '0' || y[0] == '0' || ans[0] == '0') continue;
				for(int l = 0; l < 7; l++){
					if(l <= 1) x = x + kt[l];
					else if(l > 2 && l <= 4) y = y + kt[l];
					else if (l >= 5) ans = ans + kt[l];
				}
				if(stoi(x) + stoi(y) == stoi(ans)){
					string tmp = ""; tmp = tmp + x + " + " + y + " = " + ans; ketqua.push_back(tmp);
				}
				if(stoi(x) - stoi(y) == stoi(ans)){
					string tmp = ""; tmp = tmp + x + " - " + y + " = " + ans; ketqua.push_back(tmp);
				}
				if(stoi(x) * stoi(y) == stoi(ans)){
					string tmp = ""; tmp = tmp + x + " * " + y + " = " + ans; ketqua.push_back(tmp);
				}
				if(stoi(y) != 0 && stoi(x) % stoi(y) != 0 && stoi(x) / stoi(y) == stoi(ans)){
					string tmp = ""; tmp = tmp + x + " / " + y + " = " + ans; ketqua.push_back(tmp);
				}
			}
			else Try1(i + 1);
		}
	}
	int main(){
		int t; cin >> t;
		cin.ignore();
		while(t--){
			ketqua.clear();
			n = 0;
			string s;
			getline(cin, s);
			int i = 0;
			for(char x : s){
				if(x != '=' && x != ' '){
					A[i] = x; i++;	
				}
				if(x == '?') n++;
			}
			if(A[2] == '?'){
				n--;
				Try1(1);
			}
			else{
				Try(1);
			}
			sort(ketqua.begin(), ketqua.end());
			if(ketqua.size() == 0) cout << "WRONG PROBLEM!\n";
			else cout << ketqua[0] << endl;
		}
	}
