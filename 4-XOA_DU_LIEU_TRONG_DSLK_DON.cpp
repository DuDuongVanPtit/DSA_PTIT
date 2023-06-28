#include <bits/stdc++.h>

    using namespace std;
    int main(){
        int n;
        cin >> n;
        int a[n];
        map <int, int> mp;
        for(int &x : a){
            cin >> x;
            mp[x] = 1;
        }
        int k;
        cin >> k;
        mp[k] = 0;
        for(int x : a){
            if(mp[x] == 1){
                cout << x << " ";
            }
        }
    }