#include <bits/stdc++.h>

    using namespace std;
    int n, k;
    int a[100];
    int used[100];
    void Try(int i){
        for(int j = used[i - 1]; j <= n; j++){
            used[i] = j;
            a[i] = used[i];
            if(i == k){
                for(int t = 1; t <= k; t++){
                    char ans = 'A';
                    cout << char(ans + a[t] - 1);
                }
                cout << endl;
            }
            else{
                Try(i + 1);
            }
        }
    }
    int main(){
        char X;
        cin >> X >> k;
        used[0] = 1;
        n = X - 'A' + 1;
        Try(1);
    }