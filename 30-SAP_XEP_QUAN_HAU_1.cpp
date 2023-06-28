#include <bits/stdc++.h> 
    using namespace std;
    void Try(int i, int n, int cot[], int xuoi[], int nguoc[], int x[], int b[][100], int &c){
        for(int j = 1; j <= n; j++){
            if(!cot[j] && !xuoi[i + j - 1] && !nguoc[n + i - j]){
                x[i] = j;
                cot[j] = xuoi[i + j - 1] = nguoc[n + i - j] = 1;
                if(i == n){
                	for(int i = 1; i <= n; i++) b[i][x[i]] = 1;
					for(int i = 1; i <= n; i++){
						for(int j = 1; j <= n; j++){
							cout << b[i][j] << " ";
						}
						cout << endl;
					}
					for(int i = 1; i <= n; i++) b[i][x[i]] = 0;
					cout << endl;
                    c++;
                }
                else{
                    Try(i + 1, n, cot, xuoi, nguoc, x, b, c);
                }
                cot[j] = xuoi[i + j - 1] = nguoc[n + i - j] = 0;
            }
        }
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            int c = 0;
            int n;
            cin >> n;
            int cot[100] = {0}, xuoi[100] = {0}, nguoc[100] = {0};
            int x[100] = {0}, b[100][100] = {0};
            Try(1, n, cot, xuoi, nguoc, x, b, c);
            cout << c << endl;
        }
    }
