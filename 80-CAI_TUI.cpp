#include <bits/stdc++.h> 
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n, v;
            cin >> n >> v;
            int f[n + 1][v + 1];
            memset(f, 0, sizeof(f));
            pair <int, int> p[n];
            for(int i = 0; i < n; i++){
                int weight;
                cin >> weight;
                p[i].first = weight; 
            }
            for(int i = 0; i < n; i++){
                int value;
                cin >> value;
                p[i].second = value;
            }
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= v; j++){
                    if(j >= p[i - 1].first){
                        f[i][j] = max(f[i - 1][j], f[i - 1][j - p[i - 1].first] + p[i - 1].second);
                    }
                    else{
                        f[i][j] = f[i - 1][j];
                    }
                }
            }
            cout << f[n][v] << endl;
        }
    }