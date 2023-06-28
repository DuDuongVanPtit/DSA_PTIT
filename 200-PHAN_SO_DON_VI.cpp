#include <bits/stdc++.h>
    using namespace std;
    void solve(long long &tu, long long &mau){
        while(mau % tu != 0){
            int tmp = mau / tu + 1;
            cout << 1 << "/" << tmp << " + ";
            tu = tu * tmp - mau;
            mau *= tmp;
        }
        cout << 1 << "/" << mau / tu;
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            long long tu, mau;
            cin >> tu >> mau;
            solve(tu, mau);
            cout << endl;
        }
        
    }