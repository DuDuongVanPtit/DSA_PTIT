#include <bits/stdc++.h> 
    using namespace std;
    int a[10];
    int n = 8;
    bool check(string ans){
        if(ans[4] == '0' || ans[2] == '2' || ans[0] == '0' && ans[1] == '0' || ans[2] == '0' && ans[3] == '0'){
            return false;
        }
        return true;
    }
    void Try(int i){
        for(int j = 0; j <= 1; j++){
            a[i] = j;
            if(i == n){
                string ans = "";
                for(int k = 1; k <= n; k++){
                    if(a[k] == 0){
                        ans += "0";
                    }
                    else{
                        ans += "2";
                    }
                }
                if(check(ans)){
                    for(int idx = 0; idx < ans.size(); idx++){
                        cout << ans[idx];
                        if(idx == 1 || idx == 3){
                            cout << "/";
                        }
                    }
                    cout << endl;
                }
            }
            else{
                Try(i + 1);
            }
        }
    }

    int main(){
        Try(1);
    }