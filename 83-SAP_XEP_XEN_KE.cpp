#include <bits/stdc++.h>
    using namespace std;
    bool cmp(int a, int b){
        return a > b;
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            int a[n];
            for(int i = 0; i < n; i++){
                cin >> a[i];
            }
            sort(a, a + n);
            int b[n], c[n];
            for(int i = 0; i < n; i++){
                b[i] = a[i];
            }
            sort(a, a+ n, cmp);
            for(int i = 0; i < n; i++){
                c[i] = a[i];
            }
            int i = 0;
            while(i < n){
                if(i % 2 == 0){
                    cout << c[i/2] << " ";
                }
                else{
                    cout << b[i/2] << " ";
                }
                i++;
            }
            cout << endl;
        }
    }