#include <bits/stdc++.h> 
    using namespace std;
    int c[256];
    int main(){
        int t;
        cin >> t;
        while(t--){
            int d;
            cin >> d;
            string s; cin >> s;
            int max_val = -1e9 + 7;
            int danhdau[257] = {0};
            for(char x : s){
                c[x]++;
                max_val = max(max_val, c[x]);
            }
            if((max_val -1) * (d - 1) > s.size() - max_val){
                cout << "-1";
            }
            else{
                cout << "1";
            }
            cout << endl; 
            memset(c, 0, sizeof(c));
        }
    }