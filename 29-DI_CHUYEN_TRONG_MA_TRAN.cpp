#include <bits/stdc++.h>

    using namespace std;

    pair <int, int> p[] = {{1, 0}, {0, 1}};
    void Try(int i, int j, int n, int m, int a[][100], int &c){
        if(a[i][j] != 1e9 + 7){
            for(int k = 0; k <= 1; k++){
                int I = i + p[k].first;
                int J = j + p[k].second;
                if(I == n - 1 && J == m - 1){
                    c++;
                }
                if(I < n && J < m){
                    Try(I, J, n, m, a, c); 
                }
            }
        }
        
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            int c = 0;
            int n, m;
            cin >> n >> m;
            int a[100][100];
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    cin >> a[i][j];
                }
            }
            Try(0, 0, n, m, a, c);
            cout << c << endl;
        }
    }