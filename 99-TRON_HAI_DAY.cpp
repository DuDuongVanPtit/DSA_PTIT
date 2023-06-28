#include <bits/stdc++.h>
    using namespace std;
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n, k;
            cin >> n >> k;
            int a[n], b[k];
            multiset <int> se;
            for(int &x : a){
                cin >> x;
                se.insert(x);
            }
            for(int &x : b){
                cin >> x;
                se.insert(x);
            }
            for(int x : se){
                cout << x << " ";
            }
            cout << endl;
        }
    }