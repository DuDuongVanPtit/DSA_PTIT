#include <bits/stdc++.h>
    using namespace std;
    int a[1005][1005];
    pair <int, int> p[10025];
    int main(){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(a[i][j] == 1){
                    cout << j + 1 << " ";
                }
            }
            cout << endl;
        }
    }