#include <bits/stdc++.h>

    using namespace std;
    int main(){
        int n;
        cin >> n;
        int a[n];
        for(int &x : a){
            cin >> x;
        }
        int tmp = a[0];
        vector <string> v;
        for(int i = 1; i < n; i++){
            string s = "";
            int pos = i - 1;
            int value = a[i];
            while(pos >= 0 && a[pos] > value){
                swap(a[pos], a[pos + 1]);
                pos--;
            }
            for(int j = 0; j <= i; j++){
                s = s + " " + to_string(a[j]);
            }
            v.push_back(s);
        }
        for(int i = v.size() - 1; i >= 0; i--){
            stringstream ss(v[i]);
            string tmp;
            cout << "Buoc " << i + 1 << ": ";
            while(ss >> tmp){
                cout << tmp << " ";
            }
            cout << endl;
        }
        cout << "Buoc " << n - n  << ": ";
        cout << tmp << endl;
    }