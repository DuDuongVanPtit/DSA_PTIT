#include <bits/stdc++.h>
	using namespace std;
	void chuyen(int n, char nguan, char trunggian, char dich){
		if(n == 1){
			cout << nguan << " -> " << dich << endl;
		}
		else{
			chuyen(n - 1, nguan, dich, trunggian);
			chuyen(1, nguan, trunggian, dich);
			chuyen(n - 1, trunggian, nguan, dich);
		}
	}
	
	int main(){
		int n; cin >> n;
		char nguan = 'A', trunggian = 'B', dich = 'C';
		chuyen(n, nguan, trunggian, dich);
	}
