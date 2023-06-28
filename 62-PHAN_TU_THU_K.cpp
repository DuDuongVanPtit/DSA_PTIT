#include <bits/stdc++.h>
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n, m, k;
            cin >> n >> m >> k;
            int a[n], b[m];
            for(int &x : a) cin >> x;
            for(int &y : b) cin >> y;
            int ab[m + n];
            int i = 0, j = 0;
            int c = 0;
            while(i < n && j < m){
                if(a[i] < b[j]){
                    ab[c++] = a[i];
                    i++;
                }
                else{
                    ab[c++] = b[j];
                    j++;
                }
            }
            while(i < n){
                ab[c++] = a[i];i++;
            }
            while(j < m){
                ab[c++] = b[j];
                j++;
            }
            cout << ab[k - 1] << endl;
        }
    }