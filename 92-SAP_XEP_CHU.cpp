#include <bits/stdc++.h>
    using namespace std;
    
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            int a[n];
            string s = "";
            for(int &x : a){
                cin >> x;
                s += to_string(x);
            }
            int c[100] = {0};
            for(int i = 0; i < s.size(); i++){
                c[s[i] - '0'] = 1;
            }
            for(int i = 0; i < 10; i++){
                if(c[i] == 1){
                    cout << i << " ";
                }
            }
            cout << endl;
        }
    }