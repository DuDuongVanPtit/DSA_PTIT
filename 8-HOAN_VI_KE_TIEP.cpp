#include <bits/stdc++.h>

    using namespace std;
    
    bool check(int n, int a[]){
        for(int i = 1; i <= n; i++){
            if(a[i] != n - i + 1){
                return false;
            }
        }
        return true;
    }
    void in(int n, int a[]){
        int i = n - 1;
        while(i > 1 && a[i] > a[i + 1]){
            i--;
        }
        int j = n;
        while (a[i] > a[j]){
            j--;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
        for(int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            int a[1001];
            for(int i = 1; i <= n; i++){
                cin >> a[i];
            }
            if(check(n, a)){
                for(int i = 1; i <= n; i++){
                    cout << i << " ";
                }
            }
            else{
                in(n, a);
            }
            cout << endl;
        }
        
    }