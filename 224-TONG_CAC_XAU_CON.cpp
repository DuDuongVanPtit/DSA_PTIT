#include <bits/stdc++.h> 
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            string s;
            cin >> s;
            int n = s.size();
            long long f[n + 1] = {0};
            for(int i = 1; i <= n; i++){
                string tmp = "";
                for(int j = i; j <= n; j++){
                    tmp += s[j - 1];
                    long long ans = stoll(tmp);
                    f[i] += ans;
                }
                f[i] += f[i - 1];
            }
            cout << f[n] << endl;
        }
    }