#include <bits/stdc++.h>

    using namespace std;

    pair <int, int> p[] = {{1, 0}, {0, 1}};
    void Try(int i, int j, int n, int a[][100], char tmp[], int &c){
        if(a[i][j] == 1){
            for(int k = 0; k <= 1; k++){
                int I = i + p[k].first;
                int J = j + p[k].second;
                if(a[I][J] == 1 && k == 0){
                    tmp[i + j] = 'D';
                }
                else if(a[I][J] == 1 && k == 1){
                    tmp[i + j] = 'R';
                }
                if(I == n  - 1 && J == n - 1){
                    c++;
                    for(int h = 0; h < n * 2 - 2; h++){
                        cout << tmp[h];
                    }
                    cout << " ";
                }
                if(I < n && J < n){
                    Try(I, J, n, a, tmp, c);
                }
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
            int a[100][100];
            char tmp[100];
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    cin >> a[i][j];
                }
                tmp[i] = '*';
            }
            Try(0, 0, n, a, tmp, c);
            if(c == 0){
                cout << "-1";
            }
            cout << endl;
        }
    }