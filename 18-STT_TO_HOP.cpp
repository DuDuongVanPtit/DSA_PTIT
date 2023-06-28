#include <bits/stdc++.h>

    using namespace std;
    void khoitao(int k, int a[]){
        for(int i = 1; i <= k; i++){
            a[i] = i;
        }
    }
    int ok = 1;
    void sinh(int n, int k, int a[]){
        int i = k;
        while(i >= 1 && a[i] >= n - k + i){
            i--;
        }
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
        if(i == 0){
            ok = 0;
        }
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n, k, a[1001] = {0};
            int c = 0;
            cin >> n >> k;
            string s;
            cin.ignore();
            getline(cin, s);
            string t = "";
            for(int i = 0; i < s.size(); i++){
                if(s[i] != ' '){
                    t += s[i];
                }
            }
            khoitao(k, a);
            while(ok){
                c++;
                string tmp = "";
                for(int i = 1; i <= k; i++){
                    tmp += to_string(a[i]);
                }
                sinh(n, k, a);
                if(tmp == t){
                    break;
                }
            }
            cout << c << endl;
            ok = 1;
        }
    }