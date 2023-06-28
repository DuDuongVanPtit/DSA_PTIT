#include <bits/stdc++.h>
	using namespace std;
	vector <char> v;
	pair  <int, int> p[] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
	vector <string> ok;
	string huong = "DRUL";
	void Try(int i, int j, int n, int a[][50], int &c){
		if(i == n - 1 && j == n - 1){
			c++;
			string s = "";
			for(char x : v){
				s += x;
			}
			ok.push_back(s);
		}
		for(int k = 0; k < 4; k++){
			int I = i + p[k].first;
			int J = j + p[k].second;
			if(I >= 0 && I < n && J >= 0 && J < n && a[I][J] == 1){
				a[I][J] = 0;
				v.push_back(huong[k]);
				Try(I, J, n, a, c);
				v.pop_back();
				a[I][J] = 1;
			}	
		}
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int c = 0;
			int n; cin >> n;
			int a[50][50];
			for(int i = 0; i < n; i++){
				for(int j = 0; j < n; j++){
					cin >> a[i][j];
				}
			}
			if(a[0][0] == 0){
				cout << "-1";
			}
			else{
				a[0][0] = 0;
				Try(0, 0, n, a, c);
				if(c == 0) cout << "-1";
				else{
					sort(ok.begin(), ok.end());
					for(string x : ok){
						cout << x << " ";
					}
				}
			}
			cout << endl;
			v.clear();
			ok.clear();
		}
	}
