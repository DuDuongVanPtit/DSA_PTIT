#include <bits/stdc++.h> 
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            string s;
            cin >> s;
            int n = s.size();
            int f[n + 1] = {0};
            if(s[0] == '0'){
                cout << "0\n";
            }
            else{
                f[0] = 1;
                f[1] = 1;
                for(int i = 2; i <= n; i++){
                    if(s[i - 1] > '0'){
                        f[i] += f[i - 1];
                    }
                    if(s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] <= '6')){
                        f[i] += f[i - 2];
                    }
                }
                cout << f[n] << endl;
            }
        }
    }