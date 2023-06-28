#include <bits/stdc++.h> 
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n, s;
            cin >> n >> s;
            int a[n];
            vector <bool> check(s + 1, false);
            for(int &x : a){
                cin >> x;
            }
            check[0] = true;
            for(int i = 0; i < n; i++){
                for(int j = s; j >= a[i]; j--){
                    if(check[j - a[i]] == true){
                        check[j] = true;
                    }
                }
            }
            if(check[s] == true){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }