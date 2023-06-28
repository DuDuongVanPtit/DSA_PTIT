#include <bits/stdc++.h> 

    using namespace std;

    void solve(int n, int a[]){
        int l = 0, r = n - 1;
        int ans = 0;
        while(l < r){
            int mid = (l + r) / 2;
            if(a[mid] == 0){
                l = mid + 1;ans = mid;
            }
            else{
                r = mid;
            }
        }
        cout << ans + 1;
    }

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n; 
            cin >> n;
            int a[n];
            for(int &x : a){
                cin >> x;
            }
            if(a[0] == 1){
                cout << "0";
            }
            else if(a[n - 1] == 0){
                cout << n;
            }
            else{
                solve(n, a);
            }
            cout << endl;
        }
    }