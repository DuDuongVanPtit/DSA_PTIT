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
        for(int x : a){
            if(mp[x] == 1){
                cout << x << " ";
                mp[x] = 0;
            }
        }
    }