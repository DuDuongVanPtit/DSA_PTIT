#include <bits/stdc++.h>
    using namespace std;
    int parent[1000000];
    bool ke[1000000];
    int main(){
        int t; cin >> t;
        while(t--){
            int n; cin >> n;
            for(int i = 0; i < n - 1; i++){
                int x, y;
                cin >> x >> y;
                parent[y] = x;
                ke[x] = true;
            }
            int max_val = 0;
            for(int i = 1; i <= n; i++){
                int c = 0;
                if(!ke[i]){
                    int tmp = parent[i];
                    while(tmp != 0){
                        c++;
                        tmp = parent[tmp];
                    }
                }
                max_val = max(max_val,  c);
            }
            cout << max_val << endl;
            memset(parent, 0, sizeof(parent));
            memset(ke, false, sizeof(ke));
        }
    }