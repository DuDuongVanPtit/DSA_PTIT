#include <bits/stdc++.h>

    using namespace std;

    bool used[100];

    void Try(int i, int a[], int n, char b[]){
        for(int j = 1; j <= n; j++){
            if(used[j] == false){
                a[i] = j;
                used[j] = true;
                if(i == n){
                    for(int k = 1; k <= n; k++){
                        cout << b[a[k] - 1];
                    }
                    cout << " ";
                }
                else{
                    Try(i + 1, a, n, b);
                }
                used[j] = false;
            }
        }
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            string s;
            cin >> s;
            char b[s.size()];
            int a[s.size() + 1] = {0};
            for(int i = 0; i < s.size(); i++){
                b[i] = s[i];
            }
            Try(1, a, s.size(), b);
            cout << endl;
        }
    }