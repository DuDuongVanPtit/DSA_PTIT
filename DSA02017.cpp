#include <bits/stdc++.h>
	using namespace std;
	int a[10][10], xuoi[1000], nguoc[1000], cot[10], ans[10], max_val = -1e9, b[10][10];
	void quanhau(int i){
		for(int j = 1; j <= 8; j++){
			if(!cot[j] && !xuoi[i + j - 1] && !nguoc[8 - i + j]){
				ans[i] = j;
				cot[j] = xuoi[i + j - 1] = nguoc[8 - i + j] = 1;
				if(i == 8){
					int sum = 0;
					for(int i = 1; i <= 8; i++) b[i][ans[i]] = 1;
					for(int i = 1; i <= 8; i++){
						for(int j = 1; j <= 8; j++){
							if(b[i][j]) sum += a[i][j];
						}
					}
					for(int i = 1; i <= 8; i++) b[i][ans[i]] = 0;
					max_val = max(max_val, sum);
				}
				else quanhau(i + 1);
				cot[j] = xuoi[i + j - 1] = nguoc[8 - i + j] = 0;
			}
		}
	}
	int main(){
		int t;
		cin >> t;
		while(t--){
			memset(xuoi, 0, sizeof(xuoi));
			memset(nguoc, 0, sizeof(nguoc));
			memset(cot, 0, sizeof(cot));
			for(int i = 1; i <= 8; i++){
				for(int j = 1; j <= 8; j++){
					cin >> a[i][j];
				}
			}
			quanhau(1);
			cout << max_val << endl;
			max_val = -1e9;
		}
	}
